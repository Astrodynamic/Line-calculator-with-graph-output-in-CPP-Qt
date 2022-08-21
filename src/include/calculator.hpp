#ifndef CALCULATOR_HPP
#define CALCULATOR_HPP

#include <QAbstractButton>
#include <QInputDialog>
#include <QMainWindow>

#include "calculation.hpp"
#include "graph.hpp"
#include "credit.hpp"
#include "debit.hpp"

QT_BEGIN_NAMESPACE
namespace Ui {
class Calculator;
}
QT_END_NAMESPACE

namespace s21 {
class Calculator : public QMainWindow {
  Q_OBJECT

 public:
  Calculator(QWidget *parent = nullptr);
  ~Calculator();

 public slots:
  void update_graph(double x_min, double x_max, double step);

 private slots:
  void print_lexeme(QAbstractButton *btn);
  void on_btn_clean_clicked();
  void on_btn_equal_clicked();
  void on_btn_function_clicked();
  void on_action_basic_triggered();
  void on_action_credit_triggered();
  void on_action_debit_triggered();

private:
  Ui::Calculator *ui;
  Calculation *model;
  Graph *graph;
  Credit *credit;
  Debit *debit;
};
}  // namespace s21
#endif  // CALCULATOR_HPP
