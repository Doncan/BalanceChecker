#include "balancechecker.h"
#include <QApplication>

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  BalanceChecker w;
  w.show();

  return a.exec();
}
