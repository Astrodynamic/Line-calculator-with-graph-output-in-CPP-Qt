#ifndef DEBIT_HPP
#define DEBIT_HPP

#include <QMainWindow>
#include <QBoxLayout>
#include <QPushButton>
#include <QHash>
#include <QDate>

namespace Ui {
class Debit;
}

namespace s21 {
class Debit : public QMainWindow {
  Q_OBJECT

private:
  Ui::Debit *ui;
  QHash<QPushButton *, QHBoxLayout *> widgets_push;
  QHash<QPushButton *, QHBoxLayout *> widgets_pull;

public:
  explicit Debit(QWidget *parent = nullptr);
  ~Debit();

private slots:
  void on_btn_push_clicked();
  void on_btn_pull_clicked();
  void on_btn_calculate_clicked();
  void remove_widget();

private:
  void create_new_form(QVBoxLayout * layout, bool is_push);
};
}  // namespace s21

#endif  // DEBIT_HPP
