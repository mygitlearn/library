#include "administration.h"
#include "ui_administration.h"
#include <QMessageBox>
#include <QPalette>
#include <QString>
#include <QWidget>
#include <QScrollArea>



#include <iostream>

using namespace std;

administration::administration(QMainWindow *parent) :
    QMainWindow(parent),
    ui(new Ui::administration)
{

    ui->setupUi(this);
}

administration::~administration()
{
    delete ui;
}


void administration::on_personalInfo_triggered()
{
    scroll = new QScrollArea(this);
    scroll->setBackgroundRole(QPalette::Dark);
    scroll->setGeometry(0,23,350,350);
    scroll->show();

//    QMessageBox::information(NULL, QString("title"), QString("gerenxinxi"));
}

void administration::on_addStudent_triggered()
{
    scroll->hide();
    QMessageBox::information(NULL, QString("title"), QString("addstudent"));
}
