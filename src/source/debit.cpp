#include "ui_debit.h"

#include <debit.hpp>
#include <QList>

namespace s21 {
Debit::Debit(QWidget *parent) : QMainWindow(parent), ui(new Ui::Debit) {
  ui->setupUi(this);
}

Debit::~Debit() { delete ui; }


void Debit::on_btn_push_clicked() {
  new_form("Разовое пополнение:", ui->vlo_push_item);
}

void Debit::on_btn_pull_clicked() {
  new_form("Разовое снятие:", ui->vlo_refill_item);
}

void Debit::on_btn_calculate_clicked() {

}

void Debit::delete_items() {
  QObject * obj = sender();
  delete obj->parent();
}

void Debit::new_form(QString lable, QBoxLayout * layout) {
  QLabel * lbl = new QLabel(lable, this);

  QDateEdit * date = new QDateEdit(QDate::currentDate(), this);
  date->setMinimumWidth(100);
  date->setCalendarPopup(true);

  QDoubleSpinBox * sum = new QDoubleSpinBox(this);
  sum->setMinimumWidth(150);
  sum->setMinimum(1);

  QPushButton * del = new QPushButton("×", this);
  connect(del, &QPushButton::clicked, this, &Debit::delete_items);

  QHBoxLayout * hlo = new QHBoxLayout;
  hlo->addWidget(lbl);
  hlo->addStretch();
  hlo->addWidget(date);
  hlo->addWidget(sum);
  hlo->addWidget(del);

  layout->addLayout(hlo);
}

}  // namespace s21
