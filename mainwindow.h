#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qwidget.h>
namespace Ui {
class Welcome;
}

class Welcome : public QMainWindow
{
    Q_OBJECT

public:
    explicit Welcome(QWidget *parent = 0);
    ~Welcome();


private slots:
    void on_Signin_clicked();

private:
    Ui::Welcome *ui;
};

#endif // MAINWINDOW_H
