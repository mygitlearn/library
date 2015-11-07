#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qwidget.h>
#include <QScrollArea>
#include <QSemaphore>


namespace Ui {
class Welcome;
}

class Welcome : public QMainWindow
{
    Q_OBJECT

public:
    explicit Welcome(QWidget *parent = 0);
    ~Welcome();

    const static int width = 800;
    const static int height =600;
    // This is available in all editors.

    // This is available in all editors.
//    extern QString token;
    QString getUserToken();
private slots:
    void on_Signin_clicked();

    void on_legout_clicked();

    void on_signup_clicked();



private:
    Ui::Welcome *ui;
};

#endif // MAINWINDOW_H
