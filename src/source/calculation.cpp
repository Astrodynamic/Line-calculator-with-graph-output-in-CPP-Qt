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
    qDebug() << infix;
    QStack<QChar> stack;
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
      QRegularExpression("(?<![)x+\\-\\*\\/^]|\\d|mod)([+-])")};
  bool check = true;
  for (auto it : regex) {
    if (infix.contains(it)) {
      check = false;
      break;
    }
  }
  return check;
}