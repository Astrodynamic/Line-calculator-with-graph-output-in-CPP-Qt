#include <QApplication>

#include "calculator.hpp"

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  Calculator w;
  w.show();
  return a.exec();
}
