#ifndef CREDIT_HPP
#define CREDIT_HPP

#include <QMainWindow>

namespace Ui {
class Credit;
}

namespace s21 {
class Credit : public QMainWindow {
  Q_OBJECT

 public:
  explicit Credit(QWidget *parent = nullptr);
  ~Credit();

 private:
  Ui::Credit *ui;
};
}  // namespace s21

#endif  // CREDIT_HPP
