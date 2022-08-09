#ifndef SRC_INCLUDE_CALCULATION_HPP_
#define SRC_INCLUDE_CALCULATION_HPP_

#include <QMap>
#include <QStack>
#include <QString>
#include <QVector>
#include <functional>
#include <variant>
#include <cmath>

class Calculation {
 private:
  QVector<std::variant<QChar, double>> m_rpn;

  enum class e_priority_t {DEFAULT, L_PR, M_PR, H_PR, UNARY, FUNC};

  using fp_1arg = std::function<double(double)>;
  using fp_2arg = std::function<double(double, double)>;
  using fp_variant = std::variant<fp_1arg, fp_2arg, nullptr_t>;

  QMap<QChar, QPair<e_priority_t, fp_variant>> m_fun_ptr {
      {'(', {e_priority_t::DEFAULT, nullptr}},
      {'+', {e_priority_t::L_PR, [](double lhs, double rhs) -> double {return lhs + rhs;}}},
      {'-', {e_priority_t::L_PR, [](double lhs, double rhs) -> double {return lhs - rhs;}}},
      {'*', {e_priority_t::M_PR, [](double lhs, double rhs) -> double {return lhs * rhs;}}},
      {'/', {e_priority_t::M_PR, [](double lhs, double rhs) -> double {return lhs / rhs;}}},
      {'A', {e_priority_t::M_PR, (double(*)(double, double))&std::fmod}},
      {'^', {e_priority_t::H_PR, (double(*)(double, double))&std::pow}},
      {'B', {e_priority_t::UNARY, nullptr}},
      {'C', {e_priority_t::UNARY, [](double src) -> double {return -src;}}},
      {'D', {e_priority_t::FUNC, (double(*)(double))&std::cos}},
      {'E', {e_priority_t::FUNC, (double(*)(double))&std::sin}},
      {'F', {e_priority_t::FUNC, (double(*)(double))&std::tan}},
      {'G', {e_priority_t::FUNC, (double(*)(double))&std::acos}},
      {'H', {e_priority_t::FUNC, (double(*)(double))&std::asin}},
      {'I', {e_priority_t::FUNC, (double(*)(double))&std::atan}},
      {'J', {e_priority_t::FUNC, (double(*)(double))&std::sqrt}},
      {'K', {e_priority_t::FUNC, (double(*)(double))&std::log}},
      {'L', {e_priority_t::FUNC, (double(*)(double))&std::log10}}
      };

 public:
  Calculation();
  
  void create_exp(QString& infix);
};

#endif  // SRC_INCLUDE_CALCULATION_HPP_
