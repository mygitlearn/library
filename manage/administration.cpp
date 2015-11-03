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
    adminScroll->setVisible(true);
    session = adminScroll;
    ui->setupUi(this);
}

administration::~administration()
{
    delete ui;
}


//添加容器（管理员个人信息）
void administration::on_personalInfo_triggered()
{
    session->setVisible(false);
    adminScroll->setVisible(false);
    managerScroll = new QScrollArea(this);
    managerScroll->setBackgroundRole(QPalette::Dark);
    managerScroll->setGeometry(0,23,600,600);
    managerScroll->setVisible(true);
    session = managerScroll;
}

//添加学生信息
void administration::on_addStudent_triggered()
{

    session->setVisible(false);

    managerScroll->setVisible(false);
    addStudentScroll = new QScrollArea(this);
    addStudentScroll->setBackgroundRole(QPalette::Base);
    addStudentScroll->setGeometry(0,23,300,600);
    addStudentScroll->setVisible(true);

    session = addStudentScroll;
    QMessageBox::information(NULL, QString("title"), QString("addstudent"));
}
