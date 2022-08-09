#ifndef CALCULATOR_HPP
#define CALCULATOR_HPP

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

 private:
  Ui::Calculator *ui;
};
#endif  // CALCULATOR_HPP
