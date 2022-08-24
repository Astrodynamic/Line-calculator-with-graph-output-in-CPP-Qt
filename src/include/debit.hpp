#ifndef SRC_INCLUDE_DEBIT_HPP_
#define SRC_INCLUDE_DEBIT_HPP_

#include <QBoxLayout>
#include <QDate>
#include <QHash>
#include <QMainWindow>
#include <QPushButton>

namespace Ui {
class Debit;
}

namespace s21 {
class Debit : public QMainWindow {
  Q_OBJECT

 private:
  QHash<QPushButton *, QHBoxLayout *> widgets_push;
  QHash<QPushButton *, QHBoxLayout *> widgets_pull;
  Ui::Debit *ui;

 public:
  explicit Debit(QWidget *parent = nullptr);
  ~Debit();

 private slots:
  void on_btn_push_clicked();
  void on_btn_pull_clicked();
  void on_btn_calculate_clicked();
  void remove_widget();

 private:
  QDate calc_end_date(QDate &date);
  void create_new_form(QVBoxLayout *layout, bool is_push);
  QDate set_payout(QDate &str_date, QDate &end_date);
  bool is_payday(QDate &date, QDate &pay_day);
  void fill_table(QHash<QDate, double> &table, QHash<QPushButton *, QHBoxLayout *> &widgets);
  double calc_percents(double &amount);
};
}  // namespace s21

#endif  // SRC_INCLUDE_DEBIT_HPP_
