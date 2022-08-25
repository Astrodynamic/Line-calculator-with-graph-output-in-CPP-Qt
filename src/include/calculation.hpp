#ifndef SRC_INCLUDE_CALCULATION_HPP_
#define SRC_INCLUDE_CALCULATION_HPP_

#include <QMap>
#include <QRegularExpression>
#include <QStack>
#include <QString>
#include <QVector>
#include <cmath>
#include <functional>
#include <string>
#include <variant>

#define lamdas_f1arg(SIGN) [](double src) -> double { return SIGN(src); }
#define lamdas_f2arg(SIGN) [](double lhs, double rhs) -> double { return lhs SIGN rhs; }

namespace s21 {
class Calculation {
 private:
  template <class... Ts>
  struct overloaded : Ts... {
    using Ts::operator()...;
  };

  template <class... Ts>
  overloaded(Ts...) -> overloaded<Ts...>;

  enum class f_prt_t { DEFAULT, L_PR, M_PR, H_PR, UNARY, FUNC, ALL };

  using fcast_1arg = double (*)(double);
  using fcast_2arg = double (*)(double, double);
  using fp_1arg = std::function<double(double)>;
  using fp_2arg = std::function<double(double, double)>;
  using fp_variant = std::variant<fp_1arg, fp_2arg, nullptr_t>;
  using fun_ptr_t = const QMap<QChar, QPair<QString, QPair<f_prt_t, fp_variant>>>;

  static fun_ptr_t m_fun_ptr;

  QVector<std::variant<QChar, double>> m_rpn;

 public:
  QPair<QVector<double>, QVector<double>> calculation(double x_min, double x_max, double step);
  void expression_load(QString infix);
  double calculation(double x = 0);
  bool is_empty();

 private:
  static void expression_up(QString& infix);
  static bool expression_validate(QString& infix);
  static bool is_function(QChar& lexem);
  static bool is_operation(QChar& lexem);
  static const f_prt_t get_priority(QChar& lexem);
  static bool is_priority_le(QChar& lhs, QChar& rhs);
  void qstrtod(QString& src, size_t& ind);
};
}  // namespace s21
#endif  // SRC_INCLUDE_CALCULATION_HPP_
