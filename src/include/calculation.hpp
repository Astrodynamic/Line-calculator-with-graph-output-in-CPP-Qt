#ifndef SRC_INCLUDE_CALCULATION_HPP_
#define SRC_INCLUDE_CALCULATION_HPP_

#include <QMap>
#include <QStack>
#include <QString>
#include <QVector>
#include <functional>
#include <cmath>

class Calculation {
 private:
  enum class e_type_t { NUMBER, OPERATION, VARIABLE };

  struct lexeme_t {
    e_type_t type;
    union {
      QChar operation;
      double number;
    } token;
  };

  QVector<lexeme_t> m_rpn;

  enum class e_farg_t { DEFAULT, F_1ARG, F_2ARG };
  enum class e_priority_t {DEFAULT, L_PR, M_PR, H_PR, UNARY, FUNC};

  QMap<QChar, QPair<int, QPair<int, double (*)()>>> m_fun_ptr{
      {'(', {e_priority_t::DEFAULT, {e_farg_t::DEFAULT, nullptr}}},
      {'+', {e_priority_t::L_PR, {e_farg_t::F_2ARG, [](double lhs, double rhs) {return lhs + rhs;}}}},
      {'-', {e_priority_t::L_PR, {e_farg_t::F_2ARG, [](double lhs, double rhs) {return lhs - rhs;}}}},
      {'*', {e_priority_t::M_PR, {e_farg_t::F_2ARG, [](double lhs, double rhs) {return lhs * rhs;}}}},
      {'/', {e_priority_t::M_PR, {e_farg_t::F_2ARG, [](double lhs, double rhs) {return lhs / rhs;}}}},
      {'A', {e_priority_t::M_PR, {e_farg_t::F_2ARG, std::fmod}}},
      {'^', {e_priority_t::H_PR, {e_farg_t::F_2ARG, std::pow}}},
      {'B', {e_priority_t::UNARY, {e_farg_t::DEFAULT, nullptr}}},
      {'C', {e_priority_t::UNARY, {e_farg_t::F_1ARG, [](double a) {return -a;}}}},
      {'D', {e_priority_t::FUNC, {e_farg_t::F_1ARG, std::cos}}},
      {'E', {e_priority_t::FUNC, {e_farg_t::F_1ARG, std::sin}}},
      {'F', {e_priority_t::FUNC, {e_farg_t::F_1ARG, std::tan}}},
      {'G', {e_priority_t::FUNC, {e_farg_t::F_1ARG, std::acos}}},
      {'H', {e_priority_t::FUNC, {e_farg_t::F_1ARG, std::asin}}},
      {'I', {e_priority_t::FUNC, {e_farg_t::F_1ARG, std::atan}}},
      {'J', {e_priority_t::FUNC, {e_farg_t::F_1ARG, std::sqrt}}},
      {'K', {e_priority_t::FUNC, {e_farg_t::F_1ARG, std::log}}},
      {'L', {e_priority_t::FUNC, {e_farg_t::F_1ARG, std::log10}}}
      };

 public:
  Calculation();

  void create_exp(QString& infix);
};

#endif  // SRC_INCLUDE_CALCULATION_HPP_
