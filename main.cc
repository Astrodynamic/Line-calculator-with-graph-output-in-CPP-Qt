#include <QApplication>

#include "calculator.h"

int main(int argc, char *argv[]) {
  QApplication app(argc, argv);
  SmartCalc::Calculator controller;
  controller.show();
  return app.exec();
}
