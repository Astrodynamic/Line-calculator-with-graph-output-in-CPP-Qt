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

private:
  Ui::Credit *ui;

public:
  explicit Credit(QWidget *parent = nullptr);
  ~Credit();

private slots:
  void on_btn_calculate_clicked();
};
}  // namespace s21

#endif  // CREDIT_HPP
