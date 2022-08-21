#include "credit.hpp"

#include "ui_credit.h"

namespace s21 {
Credit::Credit(QWidget *parent) : QMainWindow(parent), ui(new Ui::Credit) {
  ui->setupUi(this);
}

Credit::~Credit() { delete ui; }

void Credit::on_btn_calculate_clicked() {
  double P = ui->spin_percent->value() / 100.0 / 12.0;
  double S = ui->spin_sum->value();
  double N = ui->spin_limit->value() * ((ui->cmb_limit->currentIndex() == 0) ? 12 : 1);
  if (ui->rdb_anuit->isChecked()) {
    double x = S * (P + P / (qPow(1.0 + P, N) - 1.0));
    ui->lbl_mon->setText(QString::number(x, 'g', 9));
    ui->lbl_percent->setText(QString::number(x * N - S, 'g', 9));
    ui->lbl_total->setText(QString::number(x * N, 'g', 9));
  } else {
    double b = S / N;
    double Sp = 0;
    for (int i = 0; i < N; ++i) {
      Sp += b + (S - b * i) * P;
    }
    QString average = QString::number(b + (S - b * 0) * P, 'g', 9);
    average += "..." + QString::number(b + (S - b * (N - 1)) * P, 'g', 9);
    ui->lbl_mon->setText(average);
    ui->lbl_percent->setText(QString::number(Sp - S, 'g', 9));
    ui->lbl_total->setText(QString::number(Sp, 'g', 9));
  }
}

}  // namespace s21
