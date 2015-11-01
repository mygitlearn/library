#ifndef ADMINISTRATION_H
#define ADMINISTRATION_H

#include <QWidget>
#include <QMainWindow>

namespace Ui {
class administration;
}

class administration : public QMainWindow
{
    Q_OBJECT

public:
    explicit administration(QMainWindow *parent = 0);
    ~administration();

private slots:
    void on_personalInfo_triggered();
    void on_addStudent_triggered();

private:
    Ui::administration *ui;
};

#endif // ADMINISTRATION_H
