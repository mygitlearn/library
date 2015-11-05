#ifndef PERSONALINFO_H
#define PERSONALINFO_H

#include "public/publicheader.h"

namespace Ui {
class PersonalInfo;
}

class PersonalInfo : public QScrollArea
{
    Q_OBJECT

public:
    explicit PersonalInfo(QWidget *parent = 0);
    ~PersonalInfo();

private:
    Ui::PersonalInfo *ui;
    QTabWidget *tabWidget;
    void addFirstPanel(QTabWidget *tabWidget,QWidget *widget);
    void addSecondPanel(QTabWidget *tabWidget,QWidget *widget);
    void addThirdPanel(QTabWidget *tabWidget,QWidget *widget);
    void addTitle(QWidget *widget,const QString& str1,const QString& str2);

    void setLableTitle(QLabel *label,QWidget *parentWidget,const QString &title, int x, int y, int width, int height, QFont *font, const QString& styleSheet);
    void setTextEdit(QLineEdit *lineEdit,QWidget *parentWidget,int x,int y,int width,int height);
};
#endif // PERSONALINFO_H
