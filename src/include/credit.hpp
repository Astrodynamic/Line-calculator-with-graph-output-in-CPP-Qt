#ifndef CREDIT_HPP
#define CREDIT_HPP

#include <QMainWindow>
#include <QtMath>

namespace Ui {
class Credit;
}

namespace s21 {
class Credit : public QMainWindow {
  Q_OBJECT

 public:
  explicit Credit(QWidget *parent = nullptr);
  ~Credit();

private slots:
  void on_btn_calculate_clicked();

private:
  Ui::Credit *ui;
};
}  // namespace s21

#endif  // CREDIT_HPP
