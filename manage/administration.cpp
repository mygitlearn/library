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
    //初始化管理员登录界面，添加容器控件adminscroll
    adminScroll = new QScrollArea(this);
    adminScroll->setBackgroundRole(QPalette::Base);
    adminScroll->setGeometry(0,23,width,height);
    adminScroll->show();

    ui->setupUi(this);
}

administration::~administration()
{
    delete ui;
}



//添加容器（管理员个人信息）
void administration::on_personalInfo_triggered()
{
    adminScroll->setVisible(false);
    scroll = new QScrollArea(this);
    scroll->setBackgroundRole(QPalette::Dark);
    scroll->setGeometry(0,23,600,600);
    scroll->show();

//    QMessageBox::information(NULL, QString("title"), QString("gerenxinxi"));
}

void administration::on_addStudent_triggered()
{
    scroll->setVisible(false);
    QMessageBox::information(NULL, QString("title"), QString("addstudent"));
}
