#include "calculator.hpp"

#include "ui_calculator.h"

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::Calculator) {
  ui->setupUi(this);
}

Calculator::~Calculator() { delete ui; }
