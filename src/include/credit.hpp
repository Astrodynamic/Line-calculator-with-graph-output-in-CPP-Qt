#ifndef SRC_INCLUDE_CREDIT_HPP_
#define SRC_INCLUDE_CREDIT_HPP_

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

 private:
  void annuity_calculation(const double &rate, const double &loan, const double term);
  void differentiated_calculation(double &rate, double &loan, double term);
};
}  // namespace s21

#endif  // SRC_INCLUDE_CREDIT_HPP_
