#ifndef CALCULATOR_MODEL_CALCULATION_CALCULATION_H_
#define CALCULATOR_MODEL_CALCULATION_CALCULATION_H_

/**
 * @file calculation.h
 * @author werewolf
 * @brief Class предствляющий Model в MVC
 * @details Класс, который предоставляет интерфейс для основных арифмитических
 * расчётов строкового калькулятора
 * @version 1.0
 * @date 2022-08-26
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <QMap>
#include <QRegularExpression>
#include <QStack>
#include <QString>
#include <QVector>
#include <cmath>
#include <functional>
#include <string>
#include <variant>

namespace SmartCalc {
/**
 * @brief Шаблонный класс для переопределения лямда-выражений в std::visit
 * @tparam Ts - принемаемый тип лямда-выражения
 */
template <class... Ts>
struct overloaded : Ts... {
  using Ts::operator()...;
};

/**
 * @brief Метод переопределения списка агрументов метода overloaded в классы
 * @tparam Ts - принемаемый тип лямда-выражения
 */
template <class... Ts>
overloaded(Ts...) -> overloaded<Ts...>;

/**
 * @brief (Model) предоставляет данные и реагирует на команды контроллера,
 * изменяя своё состояние
 */
class Calculation {
 private:
  /** \enum SmartCalc::f_prt_t
   * @brief Приоритеты операций
   * @details function priority type
   */
  enum class f_prt_t {
    DEFAULT,  ///< Приоритет не арифметических операторов
    L_PR,   ///< Приоритет бинарных операций Low
    M_PR,   ///< Приоритет бинарных операций Midle
    H_PR,   ///< Приоритет бинарных операций High
    UNARY,  ///< Приоритет унарных операций
    FUNC,   ///< Приоритет функций
    ALL     ///< Приоритет остальных операций
  };

  /**
   * @brief Каст на унарную функцию
   * @details function cast on a function with one argument
   */
  using fcast_1arg = double (*)(double);

  /**
   * @brief Каст на бинарную функцию
   * @details function cast on a function with two arguments
   */
  using fcast_2arg = double (*)(double, double);

  /**
   * @brief Указатель на унарную функцию
   * @details function points on a function with one argument
   */
  using fp_1arg = std::function<double(double)>;

  /**
   * @brief Указатель на бинарную функцию
   * @details function pointer on a function with two arguments
   */
  using fp_2arg = std::function<double(double, double)>;

  /**
   * @brief Safe union для указателей на функции с одним и двумя аргументами
   * @details function pointer variant
   */
  using fp_variant = std::variant<fp_1arg, fp_2arg, nullptr_t>;

  /**
   * @brief Alias для типов данных в таблице приоритетов и указателей на функции
   * @details function prioritet and pointer type
   */
  using fun_ptr_t =
      const QMap<QChar, QPair<QString, QPair<f_prt_t, fp_variant>>>;

  /**
   * @brief Таблиц приоритетов и указателей на функции
   * @details table function prioritet and pointer type
   */
  static fun_ptr_t m_fun_ptr;

  /**
   * @brief Вызодная строка для преобразованной польской нотации
   * @details Reverse Polish notation
   */
  QVector<std::variant<QChar, double>> m_rpn;

 public:
  /**
   * @brief Расчёт значений X и Y для графика
   *
   * @param x_min Минимальный х для расчёта значений
   * @param x_max Максимальный х для расчёта значений
   * @param step Шаг для расчётов Y значений
   * @return QPair<QVector<double>, QVector<double>>
   */
  QPair<QVector<double>, QVector<double>> calculation(double x_min,
                                                      double x_max,
                                                      double step);

  /**
   * @brief Функция проверки и загрузки инфиксной нотации для преобразования в
   * RPN-нотацию
   * @param infix Прямая запись выражения записанная в строке
   */
  void expression_load(QString infix);

  /**
   * @brief Функция для получения значения после вычисления выражения
   *
   * @param x Переменная для подстановок
   * @return double
   */
  double calculation(double x = 0);

  /**
   * @brief Проверка на пустоту выражения
   *
   * @return true
   * @return false
   */
  bool is_empty();

 private:
  /**
   * @brief Преобразование инфиксной записи для облегчения работы функции
   * @param infix Входная строка в обычной полной записи
   */
  static void expression_up(QString& infix);

  /**
   * @brief Проверка на коректность введённой строки
   *
   * @param infix Строка для валидации в обычной полной записи
   * @return true
   * @return false
   */
  static bool expression_validate(QString& infix);

  /**
   * @brief Проверка, является ли токен функцией
   * @param lexem Токен
   * @return true
   * @return false
   */
  static bool is_function(QChar& lexem);

  /**
   * @brief Проверка, является ли токен оператором
   *
   * @param lexem Токен
   * @return true
   * @return false
   */
  static bool is_operation(QChar& lexem);

  /**
   * @brief Получения значения приоритета оператора
   *
   * @param lexem Токен
   * @return const f_prt_t
   */
  static const f_prt_t get_priority(QChar& lexem);

  /**
   * @brief Сравнение приоритетов операторов
   *
   * @param lhs left hand side
   * @param rhs right hand side
   * @return true
   * @return false
   */
  static bool is_priority_le(QChar& lhs, QChar& rhs);

  /**
   * @brief Преобразование строки в число
   * @param src Входная строка
   * @param ind Индекс начала поиска числа
   */
  void qstrtod(QString& src, size_t& ind);
};
}  // namespace SmartCalc

#endif  // CALCULATOR_MODEL_CALCULATION_CALCULATION_H_
