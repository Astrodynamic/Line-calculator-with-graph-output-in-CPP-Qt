#ifndef SRC_INCLUDE_DEBIT_HPP_
#define SRC_INCLUDE_DEBIT_HPP_

/**
 * @file debit.hpp
 * @author werewolf
 * @brief Отдельный модуль програмы для дебетового калькулятора
 * @version 0.1
 * @date 2022-08-26
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <QBoxLayout>
#include <QDate>
#include <QHash>
#include <QMainWindow>
#include <QPushButton>

namespace Ui {
class Debit;
}

namespace s21 {
/**
 * @brief Class представляющий отдельный модуль программы для расчёта по вкладу
 */
class Debit : public QMainWindow {
  Q_OBJECT

 private:
  /**
   * @brief Таблица виджетов для пополнений
   */
  QHash<QPushButton *, QHBoxLayout *> widgets_push;

  /**
   * @brief Таблица виджетов для снятий
   */
  QHash<QPushButton *, QHBoxLayout *> widgets_pull;
  Ui::Debit *ui;

 public:
  /**
   * @brief Construct a new Debit object
   *
   * @param parent Виджет в иерархии зависимости из вне
   */
  explicit Debit(QWidget *parent = nullptr);

  /**
   * @brief Destroy the Debit object
   */
  ~Debit();

 private slots:
  /**
   * @brief Slot для обработки сигнала нажатия клавиши добавления виджета
   * пополнения
   */
  void on_btn_push_clicked();

  /**
   * @brief Slot для обработки сигнала нажатия клавиши добавления виджета снятия
   */
  void on_btn_pull_clicked();

  /**
   * @brief Slot для обработки сигнала нажатия клавиши вычисления
   */
  void on_btn_calculate_clicked();

  /**
   * @brief Slot для обработки сигнала нажатия клавиш удаления виджета
   * пополнения и снятия
   */
  void remove_widget();

 private:
  /**
   * @brief Вычисление даты окончания срока вклада
   *
   * @param date Начальная дата кредитования
   * @return QDate
   */
  QDate calc_end_date(QDate &date);

  /**
   * @brief Создание новой формы для пополнения и снятия
   *
   * @param layout Слой в который необходимо вставить виджет
   * @param is_push Пополнение или снятие
   */
  void create_new_form(QVBoxLayout *layout, bool is_push);

  /**
   * @brief Определение следующей даты оплаты
   *
   * @param str_date Дата начала вклада
   * @param end_date Дата конца вклада
   * @return QDate
   */
  QDate set_payout(QDate &str_date, const QDate &end_date);

  /**
   * @brief Является curr дата днём оплаты
   *
   * @param date Текущая дата
   * @param pay_day Дата оплаты
   * @return true
   * @return false
   */
  bool is_payday(const QDate &date, const QDate &pay_day);

  /**
   * @brief Заполнение таблицы пополнений и снятий
   *
   * @param table Текущая таблица
   * @param widgets Виджет в слое
   */
  void fill_table(QHash<QDate, double> &table,
                  QHash<QPushButton *, QHBoxLayout *> &widgets);

  /**
   * @brief Начисленные проценты
   *
   * @param amount Сумма по вкладу
   * @return double
   */
  double calc_percents(double &amount);
};
}  // namespace s21

#endif  // SRC_INCLUDE_DEBIT_HPP_
