#include "calculation.hpp"

Calculation::fun_ptr_t Calculation::m_fun_ptr = {
    {'(', {"(", {f_prt_t::DEFAULT, nullptr}}},
    {'+', {"+", {f_prt_t::L_PR, lamdas_f2arg(+)}}},
    {'-', {"-", {f_prt_t::L_PR, lamdas_f2arg(-)}}},
    {'*', {"*", {f_prt_t::M_PR, lamdas_f2arg(*)}}},
    {'/', {"/", {f_prt_t::M_PR, lamdas_f2arg(/)}}},
    {'A', {"mod", {f_prt_t::M_PR, (fcast_2arg)&std::fmod}}},
    {'^', {"^", {f_prt_t::H_PR, (fcast_2arg)&std::pow}}},
    {'B', {"B", {f_prt_t::UNARY, nullptr}}},
    {'C', {"C", {f_prt_t::UNARY, lamdas_f1arg(-)}}},
    {'D', {"acos", {f_prt_t::FUNC, (fcast_1arg)&std::acos}}},
    {'E', {"asin", {f_prt_t::FUNC, (fcast_1arg)&std::asin}}},
    {'F', {"atan", {f_prt_t::FUNC, (fcast_1arg)&std::atan}}},
    {'G', {"cos", {f_prt_t::FUNC, (fcast_1arg)&std::cos}}},
    {'H', {"sin", {f_prt_t::FUNC, (fcast_1arg)&std::sin}}},
    {'I', {"tan", {f_prt_t::FUNC, (fcast_1arg)&std::tan}}},
    {'J', {"sqrt", {f_prt_t::FUNC, (fcast_1arg)&std::sqrt}}},
    {'K', {"ln", {f_prt_t::FUNC, (fcast_1arg)&std::log}}},
    {'L', {"log", {f_prt_t::FUNC, (fcast_1arg)&std::log10}}}};

Calculation::Calculation() {}

void Calculation::expression_load(QString infix) {
  if (expression_validate(infix)) {
    expression_up(infix);
    QStack<QChar> stack;
    for (size_t i = 0; i < infix.size(); ++i) {
      if (infix[i] == 'x') {
        m_rpn.push_back(infix[i]);
      } else if (infix[i].isDigit()) {
        static const QRegularExpression regex("\\d+[.]\\d(E[+-]\\d+)?");
        QRegularExpressionMatch match = regex.match(infix, i);
        if (match.capturedStart(0) == i) {
          m_rpn.push_back(match.captured(0).toDouble());
          i += match.capturedLength() - 1;
        }
      } else if (is_function(infix[i])) {
        qDebug() << "YES";
      }
    }
  } else {
    qDebug() << "NO";
  }
}

void Calculation::expression_up(QString& infix) {
  for (auto it = m_fun_ptr.begin(); it != m_fun_ptr.end(); ++it) {
    infix.replace(it.value().first, it.key());
  }
  static const QHash<QRegularExpression, QString> rgx_table{
      {QRegularExpression("([+\\-*\\/^\\(A])([\\+])"), "\\1B"},
      {QRegularExpression("([+\\-*\\/^\\(A])([\\-])"), "\\1C"},
      {QRegularExpression("^[\\+]"), "B"},
      {QRegularExpression("^[\\-]"), "C"},
  };
  for (auto it = rgx_table.begin(); it != rgx_table.end(); ++it) {
    infix.replace(it.key(), it.value());
  }
}

bool Calculation::expression_validate(QString& infix) {
  QVector<QRegularExpression> regex{
      QRegularExpression(".(?<![+\\-*\\/^(.]|mod|\\d)(\\d)"),
      QRegularExpression("(?<![)x]|\\d)([\\*\\/^]|mod)"),
      QRegularExpression("(?<![)x]|\\d)([+\\-\\*\\/^]|mod)([+-])"),
      QRegularExpression("(?<![())x+\\-\\*\\/^]|\\d|mod)([+-])"),
      QRegularExpression(".(?<![+\\-*\\/^(a]|mod)(a?(cos|sin|tan)|sqrt|ln)"),
      QRegularExpression(".(?<![+\\-*\\/^(sntgd])[(]"),
      QRegularExpression("(?<!\\d|[)]|x)[)]"),
      QRegularExpression("\\d*?[.]\\d*?[.]\\d*?"),
      QRegularExpression(".(?<!\\d|[\\)x])$")};
  bool flag = brackets_validate(infix);
  if (flag == true) {
    for (auto it : regex) {
      if (infix.contains(it)) {
        flag = false;
        break;
      }
    }
  }
  return flag;
}

bool Calculation::brackets_validate(QString& infix) {
  int count = 0;
  for (auto it : infix) {
    if (it == '(') {
      ++count;
    } else if (it == ')') {
      if (--count < 0) {
        break;
      }
    }
  }
  return !count;
}

bool Calculation::is_function(QChar& lexem) {
  bool flag = false;
  if (m_fun_ptr.contains(lexem)) {
    if (m_fun_ptr.value(lexem).second.first == f_prt_t::FUNC) {
      flag = true;
    }
  }
  return flag;
}