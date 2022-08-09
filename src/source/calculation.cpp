#include "calculation.hpp"

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

Calculation::Calculation() {}

void Calculation::load_expration(const QString& infix) {
  QStack<QChar> stack;

  
}