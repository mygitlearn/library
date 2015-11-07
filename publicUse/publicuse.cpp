#include "publicuse.h"
#include <QColor>
#include <QPalette>
#include <QMessageBox>

//publicUse::publicUse(){}

void publicUse::publicLabel(QWidget *widgetName,QLabel *labs, QString title, int lx, int ly, int lwidth, int lheight){
   // QScrollArea *scrName = scrollName;
    labs = new QLabel(widgetName);
    ft.setPointSize(12);    //定义字体大小
    labs->setText(title);
    labs->setFont(ft);
    labs->setGeometry(lx, ly, lwidth, lheight);
    labs->setVisible(true);
}

void publicUse::publicTextEdit(QWidget *widgetName, QTextEdit *les, int lx, int ly, int lwidth, int lheight){
//    QScrollArea *scrName = scrollName;
    les = new QTextEdit(widgetName);
    les->setGeometry(lx, ly, lwidth, lheight);
    les->setVisible(true);
}

void publicUse::publicComboBox(QWidget *widgetName, QComboBox *cbs, int cx, int cy, int cwidth, int cheight){
    cbs = new QComboBox(widgetName);
    cbs->setGeometry(cx, cy, cwidth, cheight);
    cbs->addItem("hongse");
    cbs->addItem("heise");
    cbs->addItem("lanse");
    cbs->setVisible(true);
    QString aa=cbs->currentText();
    QMessageBox::information(NULL, QString("title"), aa);
}

void publicUse::publicPushButton(QWidget *widgetName, QPushButton *cbs, char *info, int cx, int cy, int cwidth, int cheight){
    //QString infor = QString(info);
    cbs = new QPushButton(widgetName);
    cbs->setText(QString::fromLocal8Bit(info));
    cbs->setGeometry(cx, cy, cwidth, cheight);
    cbs->setVisible(true);
}
