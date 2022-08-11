#ifndef SRC_INCLUDE_CALCULATION_HPP_
#define SRC_INCLUDE_CALCULATION_HPP_

#include <QMap>
#include <QRegularExpression>
#include <QStack>
#include <QString>
#include <QVector>
#include <cmath>
#include <functional>
#include <variant>

#define lamdas_f1arg(SIGN) [](double src) -> double { return SIGN(src); }
#define lamdas_f2arg(SIGN) [](double lhs, double rhs) -> double { return lhs SIGN rhs; }

class Calculation {
 private:
  enum class f_prt_t { DEFAULT, L_PR, M_PR, H_PR, UNARY, FUNC };

  using fcast_1arg = double (*)(double);
  using fcast_2arg = double (*)(double, double);
  using fp_1arg = std::function<double(double)>;
  using fp_2arg = std::function<double(double, double)>;
  using fp_variant = std::variant<fp_1arg, fp_2arg, nullptr_t>;
  using fun_ptr_t = const QMap<QChar, QPair<QString, QPair<f_prt_t, fp_variant>>>;

  static fun_ptr_t m_fun_ptr;

  QVector<std::variant<QChar, double>> m_rpn;

 public:
  Calculation();

  void expression_load(QString infix);

 private:
  void expression_up(QString& infix);
  bool expression_validate(QString& infix);
};

#endif  // SRC_INCLUDE_CALCULATION_HPP_
