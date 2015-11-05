#include "publicuse.h"
#include <QColor>
#include <QPalette>
#include <QMessageBox>

//publicUse::publicUse(){}

void publicUse::publicLabel(QScrollArea *scrollName,QLabel *labs, QString title, int lx, int ly, int lwidth, int lheight){
    QScrollArea *scrName = scrollName;
    labs = new QLabel(scrName);
    ft.setPointSize(12);    //定义字体大小
    labs->setText(title);
    labs->setFont(ft);
    labs->setGeometry(lx, ly, lwidth, lheight);
    labs->setVisible(true);
}

void publicUse::publicTextEdit(QScrollArea *scrollName, QTextEdit *les, int lx, int ly, int lwidth, int lheight){
//    QScrollArea *scrName = scrollName;
    les = new QTextEdit(scrollName);
    les->setGeometry(lx, ly, lwidth, lheight);
    les->setVisible(true);
}

void publicUse::publicComboBox(QScrollArea *scrollName, QComboBox *cbs, int cx, int cy, int cwidth, int cheight){
    cbs = new QComboBox(scrollName);
    cbs->setGeometry(cx, cy, cwidth, cheight);
    cbs->addItem("hongse");
    cbs->addItem("heise");
    cbs->addItem("lanse");
    cbs->setVisible(true);
    QString aa=cbs->currentText();
    QMessageBox::information(NULL, QString("title"), aa);
}
