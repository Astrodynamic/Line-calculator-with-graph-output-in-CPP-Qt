#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <QMainWindow>
#include <QVector>

namespace Ui {
  class Graph;
}

namespace s21 {
class Graph : public QMainWindow {
  Q_OBJECT

 private:
  QPair<QVector<double>, QVector<double>> XYVector;

 public:
  explicit Graph(QWidget *parent = nullptr);
  ~Graph();

  void load_data(const QPair<QVector<double>, QVector<double>> &data);

 signals:
  void update_data(double x_min, double x_max, double step);

 private slots:
  void on_btn_calculate_clicked();

 private:
  Ui::Graph *ui;
};
}
#endif  // GRAPH_HPP
