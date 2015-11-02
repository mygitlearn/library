#ifndef REGIST_H
#define REGIST_H

#include <QMainWindow>

namespace Ui {
class regist;
}

class regist : public QMainWindow
{
    Q_OBJECT

public:
    explicit regist(QWidget *parent = 0);
    ~regist();

private:
    Ui::regist *ui;
};

#endif // REGIST_H
