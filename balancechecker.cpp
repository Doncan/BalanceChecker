#include "balancechecker.h"
#include "ui_balancechecker.h"

BalanceChecker::BalanceChecker(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::BalanceChecker)
{
  ui->setupUi(this);
}

BalanceChecker::~BalanceChecker()
{
  delete ui;
}
