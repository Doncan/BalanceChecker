#ifndef BALANCECHECKER_H
#define BALANCECHECKER_H

#include <QMainWindow>

namespace Ui {
class BalanceChecker;
}

class BalanceChecker : public QMainWindow
{
  Q_OBJECT

public:
  explicit BalanceChecker(QWidget *parent = 0);
  ~BalanceChecker();

private:
  Ui::BalanceChecker *ui;
};

#endif // BALANCECHECKER_H
