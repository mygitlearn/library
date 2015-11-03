#ifndef ADMINISTRATION_H
#define ADMINISTRATION_H

#include <QWidget>
#include <QMainWindow>
#include <QScrollArea>
#include <QSemaphore>

namespace Ui {
class administration;
}

class administration : public QMainWindow
{
    Q_OBJECT
    QScrollArea *adminScroll;

public:
    explicit administration(QMainWindow *parent = 0);
    ~administration();
    QScrollArea *scroll;
    const static int width = 800;
    const static int height =600;

private slots:
    void on_personalInfo_triggered();
    void on_addStudent_triggered();


private:
    Ui::administration *ui;
};

#endif // ADMINISTRATION_H
