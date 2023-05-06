#ifndef CALCULATOR_MODEL_CREDIT_CREDIT_H_
#define CALCULATOR_MODEL_CREDIT_CREDIT_H_

/**
 * @file credit.h
 * @author werewolf
 * @brief Отдельный модуль програмы для кредитного калькулятора
 * @version 1.0
 * @date 2022-08-26
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <QMainWindow>
#include <QtMath>

namespace Ui {
class Credit;
}

namespace SmartCalc {
/**
 * @brief Class представляющий отдельный модуль программы для расчёта по кредиту
 */
class Credit : public QMainWindow {
  Q_OBJECT

 private:
  Ui::Credit *ui;

 public:
  /**
   * @brief Construct a new Credit object
   *
   * @param parent Виджет в иерархии зависимости из вне
   */
  explicit Credit(QWidget *parent = nullptr);

  /**
   * @brief Destroy the Credit object
   */
  ~Credit();

 private slots:
  /**
   * @brief Slot для обработки сигнала нажатия клавиши вычисления по кредиту
   */
  void on_btn_calculate_clicked();

 private:
  /**
   * @brief Расчёт по ануительному кредитованию
   *
   * @param rate Ставка
   * @param loan Сумма
   * @param term Срок
   */
  void annuity_calculation(const double &rate, const double &loan,
                           const double term);

  /**
   * @brief Расчёт по дифференцированному кредитованию
   *
   * @param rate Ставка
   * @param loan Сумма
   * @param term Срок
   */
  void differentiated_calculation(double &rate, double &loan, double term);
};
}  // namespace SmartCalc

#endif  // CALCULATOR_MODEL_CREDIT_CREDIT_H_
