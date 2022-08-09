#ifndef SRC_INCLUDE_CALCULATION_HPP_
#define SRC_INCLUDE_CALCULATION_HPP_

#include <QMap>
#include <QStack>
#include <QString>
#include <QVector>
#include <cmath>
#include <functional>
#include <variant>

class Calculation {
 private:
  enum class f_prt_t { DEFAULT, L_PR, M_PR, H_PR, UNARY, FUNC };

  using fcast_1arg = double (*)(double);
  using fcast_2arg = double (*)(double, double);
  using fp_1arg = std::function<double(double)>;
  using fp_2arg = std::function<double(double, double)>;
  using fp_variant = std::variant<fp_1arg, fp_2arg, nullptr_t>;
  using fun_ptr_t = const QMap<QChar, QPair<f_prt_t, fp_variant>>;

#define lamdas_f1arg(SIGN) [](double src) -> double { return SIGN(src); }
#define lamdas_f2arg(SIGN) [](double lhs, double rhs) -> double { return lhs SIGN rhs; }

  static fun_ptr_t m_fun_ptr;

  QVector<std::variant<QChar, double>> m_rpn;

 public:
  Calculation();

  void create_exp(QString& infix);
};

Calculation::fun_ptr_t Calculation::m_fun_ptr = {
    {'(', {f_prt_t::DEFAULT, nullptr}},
    {'+', {f_prt_t::L_PR, lamdas_f2arg(+)}},
    {'-', {f_prt_t::L_PR, lamdas_f2arg(-)}},
    {'*', {f_prt_t::M_PR, lamdas_f2arg(*)}},
    {'/', {f_prt_t::M_PR, lamdas_f2arg(/)}},
    {'A', {f_prt_t::M_PR, (fcast_2arg)&std::fmod}},
    {'^', {f_prt_t::H_PR, (fcast_2arg)&std::pow}},
    {'B', {f_prt_t::UNARY, nullptr}},
    {'C', {f_prt_t::UNARY, lamdas_f1arg(-)}},
    {'D', {f_prt_t::FUNC, (fcast_1arg)&std::cos}},
    {'E', {f_prt_t::FUNC, (fcast_1arg)&std::sin}},
    {'F', {f_prt_t::FUNC, (fcast_1arg)&std::tan}},
    {'G', {f_prt_t::FUNC, (fcast_1arg)&std::acos}},
    {'H', {f_prt_t::FUNC, (fcast_1arg)&std::asin}},
    {'I', {f_prt_t::FUNC, (fcast_1arg)&std::atan}},
    {'J', {f_prt_t::FUNC, (fcast_1arg)&std::sqrt}},
    {'K', {f_prt_t::FUNC, (fcast_1arg)&std::log}},
    {'L', {f_prt_t::FUNC, (fcast_1arg)&std::log10}}};

#endif  // SRC_INCLUDE_CALCULATION_HPP_
