#include "calculator.hpp"

#include "ui_calculator.h"

Calculator::Calculator(QWidget *parent) : QMainWindow(parent), ui(new Ui::Calculator) {
  ui->setupUi(this);
  connect(ui->btn_print_group, SIGNAL(buttonClicked(QAbstractButton*)), this, SLOT(print_lexeme(QAbstractButton*)));
}

Calculator::~Calculator() { delete ui; }

void Calculator::print_lexeme(QAbstractButton* btn) {
  ui->display->setText(ui->display->text() + btn->text());
}

void Calculator::on_btn_clean_clicked() {
  ui->display->clear();
}

void Calculator::on_btn_equal_clicked() {
  model.expression_load(ui->display->text());
  if (!model.is_empty()) {
    ui->status_bar->messageChanged(ui->display->text());
    if (ui->display->text().contains('x')) {
      ui->display->setText(QString::number(model.calculation(), 'g', 15));
    } else {
      ui->display->setText(QString::number(model.calculation(), 'g', 15));
    }
  }
}
