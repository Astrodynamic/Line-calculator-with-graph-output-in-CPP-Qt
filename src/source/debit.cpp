#include <debit.hpp>

#include "ui_debit.h"

namespace s21 {
Debit::Debit(QWidget *parent) : QMainWindow(parent), ui(new Ui::Debit) {
  ui->setupUi(this);
}

Debit::~Debit() { delete ui; }

void Debit::on_btn_push_clicked() { create_new_form(ui->vlo_push_item, true); }

void Debit::on_btn_pull_clicked() { create_new_form(ui->vlo_pull_item, false); }

void Debit::on_btn_calculate_clicked() {
  double S = ui->spn_sum->value();
  double S1 = S;
  size_t N = ui->spn_limit->value();
  double P = ui->spn_percent->value();
  double R = ui->spn_krate->value();
  double L = ui->spn_rest->value();

  QHash<QDate, double> refill;
  for (auto &&item : widgets_push) {
    auto t_date = ((QDateEdit *)item->itemAt(2)->widget())->date();
    auto t_value = ((QDoubleSpinBox *)item->itemAt(3)->widget())->value();
    refill.insert(t_date, t_value);
  }

  QHash<QDate, double> withdrawal;
  for (auto &&item : widgets_pull) {
    auto t_date = ((QDateEdit *)item->itemAt(2)->widget())->date();
    auto t_value = ((QDoubleSpinBox *)item->itemAt(3)->widget())->value();
    withdrawal.insert(t_date, t_value);
  }

  QDate date = ui->dt_start->date(), end_date = date.addDays(N);
  if (ui->cmb_limit->currentIndex() == 1) {
    end_date = date.addMonths(N);
    N = date.daysTo(end_date);
  } else if (ui->cmb_limit->currentIndex() == 2) {
    end_date = date.addYears(N);
    N = date.daysTo(end_date);
  }

  double coefficient = (P / date.daysInYear() / 100.0);
  double percent_day = S * coefficient;
  double persents = 0.0;
  for (QDate i = date; i < end_date; i = i.addDays(1)) {
    persents += percent_day;
    if (ui->ckb_capital->isChecked()) {
      S += percent_day;
      percent_day = S * coefficient;
    }
    if (refill.contains(i)) {
      S += refill.value(i);
      percent_day = S * coefficient;
    }
    if (withdrawal.contains(i)) {
      if ((withdrawal.value(i) + L) < S) {
        S -= withdrawal.value(i);
      }
      percent_day = S * coefficient;
    }
  }

  ui->lbl_icharg->setText(QString::number(persents, 'g', 9));

  double S0 = 1000000 * R / 100;
  double taxable_part = ((persents - S0) > 0) ? (persents - S0) : 0;
  double tax = taxable_part * 0.13;
  ui->lbl_tax->setText(QString::number(tax, 'g', 9));

  ui->lbl_latax->setText(QString::number(persents - tax, 'g', 9));

  double Ref = 0.0;
  if (ui->ckb_capital->isChecked()) {
    Ref = persents / S1 * 365 / N * 100;
  }
  ui->lbl_erate->setText(QString::number(Ref, 'g', 9));
  ui->lbl_tsum->setText(QString::number(S, 'g', 9));
}

void Debit::remove_widget() {
  QPushButton *btn = qobject_cast<QPushButton *>(sender());
  QHBoxLayout *layout = nullptr;
  if (widgets_push.contains(btn)) {
    layout = widgets_push.take(btn);
  } else {
    layout = widgets_pull.take(btn);
  }

  while (layout->count() != 0) {
    QLayoutItem *item = layout->takeAt(0);
    delete item->widget();
    delete item;
  }
  delete layout;
}

void Debit::create_new_form(QVBoxLayout *layout, bool is_push) {
  QLabel *lbl = nullptr;
  if (is_push) {
    lbl = new QLabel("Разовое пополнение:", this);
  } else {
    lbl = new QLabel("Разовое снятие:", this);
  }

  QDateEdit *date = new QDateEdit(QDate::currentDate(), this);
  date->setMinimumWidth(100);
  date->setCalendarPopup(true);

  QDoubleSpinBox *sum = new QDoubleSpinBox(this);
  sum->setMinimumWidth(150);
  sum->setMaximum(50000000);
  sum->setMinimum(1);

  QPushButton *del = new QPushButton("×", this);
  connect(del, &QPushButton::clicked, this, &Debit::remove_widget);

  QHBoxLayout *hlo = new QHBoxLayout;
  hlo->addWidget(lbl);
  hlo->addStretch();
  hlo->addWidget(date);
  hlo->addWidget(sum);
  hlo->addWidget(del);

  layout->insertLayout(0, hlo);
  if (is_push) {
    widgets_push.insert(del, hlo);
  } else {
    widgets_pull.insert(del, hlo);
  }
}

}  // namespace s21
