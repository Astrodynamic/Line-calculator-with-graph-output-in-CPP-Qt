#include "debit.hpp"

#include "ui_debit.h"

namespace s21 {
Debit::Debit(QWidget *parent) : QMainWindow(parent), ui(new Ui::Debit) {
  ui->setupUi(this);
}

Debit::~Debit() { delete ui; }
}  // namespace s21