#include "credit.hpp"

#include "ui_credit.h"

namespace s21 {
Credit::Credit(QWidget *parent) : QMainWindow(parent), ui(new Ui::Credit) {
  ui->setupUi(this);
}

Credit::~Credit() { delete ui; }
}  // namespace s21