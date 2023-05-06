#ifndef CALCULATOR_CONTROLLER_CALCULATOR_CALCULATOR_H_
#define CALCULATOR_CONTROLLER_CALCULATOR_CALCULATOR_H_

/**
 * @file calculator.h
 * @author werewolf
 * @brief Class предствляющий Controler в MVC
 * @version 1.0
 * @date 2022-08-26
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <QAbstractButton>
#include <QCommandLinkButton>
#include <QInputDialog>
#include <QMainWindow>

#include "calculation.h"
#include "credit.h"
#include "debit.h"
#include "graph.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class Calculator;
}
QT_END_NAMESPACE

namespace SmartCalc {
/**
 * @brief  (Controller) интерпретирует действия пользователя, оповещая модель о
 * необходимости изменений
 */
class Calculator : public QMainWindow {
  Q_OBJECT

 private:
  Ui::Calculator *ui;  ///< Основной UI
  Calculation *model;  ///< Model
  Graph *graph;  ///< View для представления графиков функций
  Credit *credit;  ///< Отдельный модуль для кредитного калькулятора
  Debit *debit;  ///< Отдельный модуль для дебитового калькулятора

 public:
  /**
   * @brief Construct a new Calculator object
   * @details Дефолтный конструктор для созданий объекта класса
   * @param parent Виджет в иерархии зависимости из вне
   */
  explicit Calculator(QWidget *parent = nullptr);

  /**
   * @brief Destroy the Calculator object
   * @details Деструктор класса
   */
  ~Calculator();

 public slots:
  /**
   * @brief Slot для связывания данных Model - View(Graph)
   *
   * @param x_min - минимальное значение X
   * @param x_max - максимальное значени Х
   * @param step - Шаг для расчётов Y
   */
  void update_graph(double x_min, double x_max, double step);

 private slots:
  /**
   * @brief Slot для обработки сигнала нажатия клавиш
   *
   * @param btn клавиша
   */
  void print_lexeme(QAbstractButton *btn);

  /**
   * @brief Slot для обработки сигнала нажатия клавиши очистки
   */
  void on_btn_clean_clicked();

  /**
   * @brief Slot для обработки сигнала нажатия клавиши расчитать
   */
  void on_btn_equal_clicked();

  /**
   * @brief Slot для обработки сигнала нажатия клавиши показа графика
   */
  void on_btn_function_clicked();

  /**
   * @brief Slot для обработки сигнала нажатия клавиши переключения на обычный
   * калькулятор
   */
  void on_action_basic_triggered();

  /**
   * @brief Slot для обработки сигнала нажатия клавиши переключения на кредитный
   * калькулятор
   */
  void on_action_credit_triggered();

  /**
   * @brief Slot для обработки сигнала нажатия клавиши переключения на дебетовый
   * калькулятор
   */
  void on_action_debit_triggered();
};
}  // namespace SmartCalc

#endif  // CALCULATOR_CONTROLLER_CALCULATOR_CALCULATOR_H_
