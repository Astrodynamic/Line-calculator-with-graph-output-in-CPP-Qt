#ifndef CALCULATOR_HPP
#define CALCULATOR_HPP

#include <QAbstractButton>
#include <QInputDialog>
#include <QMainWindow>

#include "calculation.hpp"

QT_BEGIN_NAMESPACE
namespace Ui {
class Calculator;
}
QT_END_NAMESPACE

class Calculator : public QMainWindow {
  Q_OBJECT

 public:
  Calculator(QWidget *parent = nullptr);
  ~Calculator();

 private slots:
  void print_lexeme(QAbstractButton *btn);
  void on_btn_clean_clicked();
  void on_btn_equal_clicked();
  void on_btn_function_clicked();

private:
  Ui::Calculator *ui;
  Calculation *model;
};
#endif  // CALCULATOR_HPP
