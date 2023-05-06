#include "credit.h"

#include "ui_credit.h"

namespace SmartCalc {
Credit::Credit(QWidget *parent) : QMainWindow(parent), ui(new Ui::Credit) {
  ui->setupUi(this);
}

Credit::~Credit() { delete ui; }

void Credit::on_btn_calculate_clicked() {
  double day_rate = ui->spin_percent->value() / 100.0 / 12.0;
  double loan_amount = ui->spin_sum->value();

  double term = [&]() -> double {
    double limit = ui->spin_limit->value();
    if (ui->cmb_limit->currentIndex() == 0) {
      limit *= 12;
    }
    return limit;
  }();

  if (ui->rdb_anuit->isChecked()) {
    annuity_calculation(day_rate, loan_amount, term);
  } else {
    differentiated_calculation(day_rate, loan_amount, term);
  }
}

void Credit::differentiated_calculation(double &rate, double &loan, double term) {
  double mon_debt = loan / term;

  double loan_body = 0.0, loan_rate = 0.0;
  auto month_loan = [&](int month) {
    loan_rate = (loan - mon_debt * month) * rate;
    return mon_debt + loan_rate;
  };

  for (int month = 0; month < term; ++month) {
    loan_body += month_loan(month);
  }

  QString str_loan = QString::number(month_loan(0), 'g', 9);
  QString end_loan = QString::number(month_loan(term - 1), 'g', 9);
  ui->lbl_mon->setText(str_loan + "..." + end_loan);

  ui->lbl_percent->setText(QString::number(loan_body - loan, 'g', 9));
  ui->lbl_total->setText(QString::number(loan_body, 'g', 9));
}

void Credit::annuity_calculation(const double &rate, const double &loan, const double term) {
  double mon_pay = loan * (rate + rate / (qPow(1.0 + rate, term) - 1.0));
  ui->lbl_mon->setText(QString::number(mon_pay, 'g', 9));

  double total_sum = mon_pay * term;
  ui->lbl_total->setText(QString::number(total_sum, 'g', 9));

  double profit = total_sum - loan;
  ui->lbl_percent->setText(QString::number(profit, 'g', 9));
}

}  // namespace SmartCalc
