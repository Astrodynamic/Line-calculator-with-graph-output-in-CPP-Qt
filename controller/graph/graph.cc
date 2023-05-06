#include "graph.h"

#include "ui_graph.h"

namespace SmartCalc {
Graph::Graph(QWidget *parent) : QMainWindow(parent), ui(new Ui::Graph) {
  ui->setupUi(this);
  ui->wgt_graph->setInteraction(QCP::iRangeZoom, true);
  ui->wgt_graph->setInteraction(QCP::iRangeDrag, true);
}

Graph::~Graph() { delete ui; }

void Graph::load_data(const QPair<QVector<double>, QVector<double>> &data) {
  XYVector = std::move(data);
}

void Graph::on_btn_calculate_clicked() {
  emit update_data(ui->x_min->value(), ui->x_max->value(), ui->x_step->value());
  ui->wgt_graph->xAxis->setRange(ui->x_min->value(), ui->x_max->value());
  ui->wgt_graph->yAxis->setRange(ui->y_min->value(), ui->y_max->value());
  ui->wgt_graph->clearGraphs();
  ui->wgt_graph->addGraph();
  ui->wgt_graph->graph(0)->addData(XYVector.first, XYVector.second);
  ui->wgt_graph->replot();
}
}  // namespace SmartCalc
