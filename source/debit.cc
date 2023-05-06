#include <debit.hpp>

#include "ui_debit.h"

namespace SmartCalc {
Debit::Debit(QWidget *parent) : QMainWindow(parent), ui(new Ui::Debit) {
  ui->setupUi(this);
}

Debit::~Debit() { delete ui; }

void Debit::on_btn_push_clicked() { create_new_form(ui->vlo_push_item, true); }

void Debit::on_btn_pull_clicked() { create_new_form(ui->vlo_pull_item, false); }

void Debit::on_btn_calculate_clicked() {
  double deposit_amount = ui->spn_sum->value();
  double key_rate = ui->spn_krate->value();

  double persents = calc_percents(deposit_amount);

  ui->lbl_icharg->setText(QString::number(persents, 'g', 9));

  double taxable_part = persents - 10000 * key_rate;
  double tax = 0.13 * ((taxable_part > 0) ? taxable_part : 0.0);
  ui->lbl_tax->setText(QString::number(tax, 'g', 9));

  ui->lbl_latax->setText(QString::number(persents - tax, 'g', 9));

  double effective_rate = 0.0;
  if (ui->ckb_capital->isChecked()) {
    effective_rate = (persents - tax) / deposit_amount * 100;
  }
  ui->lbl_erate->setText(QString::number(effective_rate, 'g', 9));
  ui->lbl_tsum->setText(QString::number(deposit_amount, 'g', 9));
}

double Debit::calc_percents(double &amount) {
  QHash<QDate, double> refill;
  fill_table(refill, widgets_push);

  QHash<QDate, double> withdrawal;
  fill_table(withdrawal, widgets_pull);

  double min_balance = ui->spn_rest->value();
  double interest_rate = ui->spn_percent->value();

  QDate str_date = ui->dt_start->date();
  QDate end_date = calc_end_date(str_date);
  QDate pay_date = set_payout(str_date, end_date);

  double coefficient = (interest_rate / str_date.daysInYear() / 100.0);
  double percent_day = amount * coefficient;
  double period_percent = 0.0;

  double persents = 0.0;
  for (QDate curr_date = str_date.addDays(1); curr_date <= end_date;
       curr_date = curr_date.addDays(1)) {
    persents += percent_day;
    period_percent += percent_day;
    if (is_payday(curr_date, pay_date)) {
      amount += period_percent;
      period_percent = 0.0;
      pay_date = set_payout(pay_date, end_date);
      percent_day = amount * coefficient;
    }
    if (refill.contains(curr_date)) {
      amount += refill.value(curr_date);
      percent_day = amount * coefficient;
    }
    if (withdrawal.contains(curr_date)) {
      if ((withdrawal.value(curr_date) + min_balance) < amount) {
        amount -= withdrawal.value(curr_date);
      }
      percent_day = amount * coefficient;
    }
  }
  return persents;
}

bool Debit::is_payday(const QDate &date, const QDate &pay_day) {
  return ui->ckb_capital->isChecked() && (date == pay_day);
}

QDate Debit::set_payout(QDate &str_date, const QDate &end_date) {
  QDate pay_date;
  switch (ui->cmb_period->currentIndex()) {
    case 0: pay_date = str_date.addMonths(1); break;
    case 1: pay_date = str_date.addMonths(3); break;
    case 2: pay_date = str_date.addYears(1); break;
    default: pay_date = end_date; break;
  }
  return pay_date;
}

QDate Debit::calc_end_date(QDate &date) {
  QDate end_date;
  int term = ui->spn_limit->value();
  switch (ui->cmb_limit->currentIndex()) {
    case 0: end_date = date.addDays(term); break;
    case 1: end_date = date.addMonths(term); break;
    case 2: end_date = date.addYears(term); break;
  }
  return end_date;
}

void Debit::fill_table(QHash<QDate, double> &table,
                       QHash<QPushButton *, QHBoxLayout *> &widgets) {
  for (auto &&item : widgets) {
    auto t_date = ((QDateEdit *)item->itemAt(2)->widget())->date();
    auto t_value = ((QDoubleSpinBox *)item->itemAt(3)->widget())->value();
    if (table.contains(t_date)) {
      table[t_date] += t_value;
    } else {
      table.insert(t_date, t_value);
    }
  }
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
}  // namespace SmartCalc
