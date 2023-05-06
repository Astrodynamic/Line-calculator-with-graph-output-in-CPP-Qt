#include <QApplication>

#include "calculator.hpp"

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  SmartCalc::Calculator w;
  w.show();
  return a.exec();
}
