#ifndef DEBIT_HPP
#define DEBIT_HPP

#include <QMainWindow>

namespace Ui {
class Debit;
}

namespace s21 {
class Debit : public QMainWindow {
  Q_OBJECT

 public:
  explicit Debit(QWidget *parent = nullptr);
  ~Debit();

 private:
  Ui::Debit *ui;
};
}  // namespace s21

#endif  // DEBIT_HPP
