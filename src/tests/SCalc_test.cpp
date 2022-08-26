#include <gtest/gtest.h>

#include "calculation.hpp"
#include <cmath>

TEST(calculation, add) {
  s21::Calculation calc;
  calc.expression_load("5.53234+1032.42342");
  ASSERT_NEAR(calc.calculation(), 1037.95576, 1e-6);
}

TEST(calculation, sum) {
  s21::Calculation calc;
  calc.expression_load("1037.95576-234.234");
  ASSERT_NEAR(calc.calculation(), 803.72176, 1e-6);
}

TEST(calculation, mul) {
  s21::Calculation calc;
  calc.expression_load("803.72176*423.234");
  ASSERT_NEAR(calc.calculation(), 340162.375372, 1e-6);
}

TEST(calculation, div) {
  s21::Calculation calc;
  calc.expression_load("340162.375372/342.32");
  ASSERT_NEAR(calc.calculation(), 993.697053552, 1e-6);
}

TEST(calculation, mod) {
  s21::Calculation calc;
  calc.expression_load("993.697053552mod423.234");
  ASSERT_NEAR(calc.calculation(), 147.229053552, 1e-6);
}

TEST(calculation, parenthesis) {
  s21::Calculation calc;
  calc.expression_load("423.23*(23-4.3)");
  ASSERT_NEAR(calc.calculation(), 7914.401, 1e-6);
}

TEST(calculation, sin) {
  s21::Calculation calc;
  calc.expression_load("sin(54.5)");
  ASSERT_NEAR(calc.calculation(), -0.88797583833, 1e-6);
}

TEST(calculation, cos) {
  s21::Calculation calc;
  calc.expression_load("cos(32.32)");
  ASSERT_NEAR(calc.calculation(), 0.61841396583, 1e-6);
}

TEST(calculation, tan) {
  s21::Calculation calc;
  calc.expression_load("tan(34.23)");
  ASSERT_NEAR(calc.calculation(), -0.33975534786, 1e-6);
}

TEST(calculation, log) {
  s21::Calculation calc;
  calc.expression_load("log(23.23)");
  ASSERT_NEAR(calc.calculation(), 1.3660492098, 1e-6);
}

TEST(calculation, ln) {
  s21::Calculation calc;
  calc.expression_load("ln(48.234)");
  ASSERT_NEAR(calc.calculation(), 3.87606416657, 1e-6);
}

TEST(calculation, sqrt) {
  s21::Calculation calc;
  calc.expression_load("sqrt(423)");
  ASSERT_NEAR(calc.calculation(), 20.5669638012, 1e-6);
}

TEST(calculation, asin) {
  s21::Calculation calc;
  calc.expression_load("asin(0.324)");
  ASSERT_NEAR(calc.calculation(), 0.329954518, 1e-6);
}

TEST(calculation, acos) {
  s21::Calculation calc;
  calc.expression_load("acos(0.324)");
  ASSERT_NEAR(calc.calculation(), 1.24084181, 1e-6);
}

TEST(calculation, atan) {
  s21::Calculation calc;
  calc.expression_load("atan(-0.324)");
  ASSERT_NEAR(calc.calculation(), -0.313327168, 1e-6);
}

TEST(calculation, pow) {
  s21::Calculation calc;
  calc.expression_load("423.32^(2.432^(1/5))");
  ASSERT_NEAR(calc.calculation(), 1372.787322, 1e-6);
}

TEST(calculation, pi) {
  s21::Calculation calc;
  calc.expression_load("p");
  ASSERT_NEAR(calc.calculation(), 3.1415926, 1e-6);
}

TEST(calculation, e) {
  s21::Calculation calc;
  calc.expression_load("e");
  ASSERT_NEAR(calc.calculation(), 2.718281, 1e-6);
}

TEST(calculation, expression_1) {
  s21::Calculation calc;
  calc.expression_load("cos(sin(3.14))");
  ASSERT_NEAR(calc.calculation(), 0.999998, 1e-6);
}

TEST(calculation, expression_2) {
  s21::Calculation calc;
  calc.expression_load("(cos(sin(3.14))+3.12)^-5.14E-3");
  ASSERT_NEAR(calc.calculation(), 0.9927489, 1e-6);
}

TEST(calculation, expression_3) {
  s21::Calculation calc;
  calc.expression_load("sqrt(cos(sin(3.14))+3.12)^-5.14E-3");
  ASSERT_NEAR(calc.calculation(), 0.9963678, 1e-6);
}

TEST(calculation, expression_4) {
  s21::Calculation calc;
  calc.expression_load("sqrt(cos(sin(3.14))+3.12)^-5.14E-3");
  ASSERT_NEAR(calc.calculation(), 0.9963678, 1e-6);
}

TEST(calculation, calculation_5) {
  s21::Calculation calc;
  calc.expression_load("(-(-(+(+5))))");
  ASSERT_NEAR(calc.calculation(), 5, 1e-6);
}

TEST(calculation, calculation_6) {
  s21::Calculation calc;
  calc.expression_load("0^(-1)");
  ASSERT_DOUBLE_EQ(calc.calculation(), INFINITY);
}

TEST(calculation, calculation_7) {
  s21::Calculation calc;
  calc.expression_load("2^(3+4*5)*(2*2)+2+6/3");
  ASSERT_NEAR(calc.calculation(), 33554436, 1e-6);
}

TEST(calculation, calculation_8) {
  s21::Calculation calc;
  calc.expression_load("sin(2-1)*2^2+6^2*2");
  ASSERT_NEAR(calc.calculation(), 75.365883939231579, 1e-6);
}

TEST(calculation, calculation_9) {
  s21::Calculation calc;
  calc.expression_load("(-(-(-5)))*(-(-5))");
  ASSERT_NEAR(calc.calculation(), -25, 1e-6);
}

TEST(calculation, calculation_10) {
  s21::Calculation calc;
  calc.expression_load("-2^(3+4*5)*(2*2)+2+6/3");
  ASSERT_NEAR(calc.calculation(), -33554428, 1e-6);
}

TEST(calculation, calculation_11) {
  s21::Calculation calc;
  calc.expression_load("56+21-376+(56-22)-(13+10)+(11+(7-(3+2)))");
  ASSERT_NEAR(calc.calculation(), -275, 1e-6);
}

TEST(calculation, calculation_12) {
  s21::Calculation calc;
  calc.expression_load("tan(10)*((5-3)*ln(4)-log(8))*2+7");
  ASSERT_NEAR(calc.calculation(), 9.4242194938376841, 1e-6);
}

TEST(calculation, calculation_13) {
  s21::Calculation calc;
  calc.expression_load("((-(-356.081*4598.63)*803.928*(70.592*(-0.1569))*(-36.1566)))");
  ASSERT_NEAR(calc.calculation(), 527181836601.876000, 1);
}