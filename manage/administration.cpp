#include "administration.h"
#include "ui_administration.h"
#include <QMessageBox>
#include <QPalette>
#include <QString>


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

void administration::on_addStudent_triggered()
{
    QMessageBox::information(NULL, QString("title"), QString("sd"));
}

void administration::on_personalInfo_triggered()
{
    QMessageBox::information(NULL, QString("title"), QString("45678"));
}
