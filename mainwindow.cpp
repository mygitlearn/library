#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "manage/administration.h"
#include <iostream>
#include <string>
#include <QWidget>

using namespace std;

Welcome::Welcome(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Welcome)
{
    ui->setupUi(this);
}

Welcome::~Welcome()
{
    delete ui;
}


void Welcome::on_Signin_clicked()
{
    cout<<"123456"<<endl;

//    QWidget *student_management;
//    student_management = new QWidget();
//    student_management->setBaseSize(500,300);
//    student_management->show();


      administration  *tt = new administration();
      tt->show();
      this->hide();



}
