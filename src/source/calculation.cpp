#include "calculation.hpp"

namespace s21 {
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
  m_rpn.clear();
  if (expression_validate(infix)) {
    expression_up(infix);
    QStack<QChar> stack;
    for (size_t i = 0; i < infix.size(); ++i) {
      if (infix[i] == 'x') {
        m_rpn.push_back(infix[i]);
      } else if (infix[i] == 'p') {
        m_rpn.push_back(M_PI);
      } else if (infix[i] == 'e') {
        m_rpn.push_back(M_E);
      } else if (infix[i].isDigit()) {
        qstrtod(infix, i);
      } else if (is_function(infix[i])) {
        stack.push(infix[i]);
      } else if (is_operation(infix[i])) {
        while (!stack.isEmpty() && is_operation(stack.top()) &&
               is_priority_le(infix[i], stack.top())) {
          m_rpn.push_back(stack.pop());
        }
        stack.push(infix[i]);
      } else if (infix[i] == '(') {
        stack.push(infix[i]);
      } else if (infix[i] == ')') {
        while (stack.top() != '(') {
          m_rpn.push_back(stack.pop());
        }
        stack.pop();
        if (!stack.isEmpty() && is_function(stack.top())) {
          m_rpn.push_back(stack.pop());
        }
      }
    }
    while (!stack.isEmpty()) {
      m_rpn.push_back(stack.pop());
    }
  }
}

double Calculation::calculation(double x) {
  QStack<double> stack;
  for (auto it : m_rpn) {
    std::visit(overloaded{[&](QChar& arg) {
      if (arg == 'x') {
        stack.push(x);
      } else {
        std::visit(overloaded{
          [&](fp_1arg fn) { stack.push(fn(stack.pop())); },
          [&](fp_2arg fn) {
            double rhs = stack.pop();
            double lhs = stack.pop();
            stack.push(fn(lhs, rhs));
          },
          [](auto fn) {}
        }, m_fun_ptr.value(arg).second.second);
      }
    }, [&](double& arg) { stack.push(arg); }}, it);
  }
  return stack.pop();
}

QPair<QVector<double>, QVector<double>> Calculation::calculation(double x_min, double x_max, double step) {
  QPair<QVector<double>, QVector<double>> XYVector;
  for (double x = x_min, y; x <= x_max; x += step) {
    if (isfinite(y = calculation(x))) {
      XYVector.first.push_back(x);
      XYVector.second.push_back(y);
    }
  }
  return XYVector;
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
  static const QVector<QRegularExpression> regex{
      QRegularExpression(".(?<![+\\-*\\/^(.]|mod|\\d)(\\d)"),
      QRegularExpression("(?<![)xpe]|\\d)([\\*\\/^]|mod)"),
      QRegularExpression("(?<![)xpe]|\\d)([+\\-\\*\\/^]|mod)([+-])"),
      QRegularExpression(".(?<![())xpe+\\-\\*\\/^E]|\\d|mod)([+-])"),
      QRegularExpression("(?<=^|[-+*\\/^(]|mod)(ln|log|sqrt|a?(cos|sin|tan))(*SKIP)(*F)|(?1)"),
      QRegularExpression("(\\((?>[^()\n]|(?1))*+\\))(*SKIP)(*F)|[()]"),
      QRegularExpression(".(?<![+\\-*\\/^(sntgd])[(]"),
      QRegularExpression("(?<!\\d|[)xpe])[)]"),
      QRegularExpression("\\d*?[.]\\d*?[.]\\d*?"),
      QRegularExpression(".(?<!\\d|[\\)xpe])$"),
      QRegularExpression("(?<!\\d)E"),
      QRegularExpression("nan|inf")};
  bool flag = true;
  for (auto it : regex) {
    if (infix.contains(it)) {
      flag = false;
      break;
    }
  }
  return flag;
}

bool Calculation::is_function(QChar& lexem) {
  bool flag = false;
  if (m_fun_ptr.contains(lexem)) {
    if (get_priority(lexem) == f_prt_t::FUNC) {
      flag = true;
    }
  }
  return flag;
}

bool Calculation::is_operation(QChar& lexem) {
  bool flag = false;
  if (m_fun_ptr.contains(lexem)) {
    if (get_priority(lexem) > f_prt_t::DEFAULT &&
        get_priority(lexem) < f_prt_t::FUNC) {
      flag = true;
    }
  }
  return flag;
}

const Calculation::f_prt_t Calculation::get_priority(QChar& lexem) {
  return m_fun_ptr.value(lexem).second.first;
}

bool Calculation::is_priority_le(QChar& lhs, QChar& rhs) {
  bool flag = false;
  if (get_priority(lhs) <= get_priority(rhs)) {
    flag = true;
  }
  return flag;
}

void Calculation::qstrtod(QString& src, size_t& ind) {
  static const QRegularExpression regex("\\d+(([.]\\d+)?(E[+-]\\d+)?)?");
  QRegularExpressionMatch match = regex.match(src, ind);
  if (match.capturedStart(0) == ind) {
    m_rpn.push_back(match.captured(0).toDouble());
    ind += (match.capturedLength() - 1);
  }
}

bool Calculation::is_empty() {
  return m_rpn.empty();
}
}
