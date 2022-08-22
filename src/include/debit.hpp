#ifndef DEBIT_HPP
#define DEBIT_HPP

#include <QMainWindow>
#include <QBoxLayout>

namespace Ui {
class Debit;
}

namespace s21 {
class Debit : public QMainWindow {
  Q_OBJECT

private:
  Ui::Debit *ui;

 public:
  explicit Debit(QWidget *parent = nullptr);
  ~Debit();

private slots:
  void on_btn_push_clicked();
  void on_btn_pull_clicked();
  void on_btn_calculate_clicked();
  void delete_items();

private:
  void new_form(QString lable, QBoxLayout * layout);
};
}  // namespace s21

#endif  // DEBIT_HPP
