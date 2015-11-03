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

//生成scrollArea容器的公共函数
void administration::publicScroll(QScrollArea *scrollName){
    scrollName->setBackgroundRole(QPalette::Dark);
    scrollName->setGeometry(x,y,width,height);
    scrollName->setVisible(true);
    session = scrollName;
}

//添加容器（管理员个人信息）
void administration::on_personalInfo_triggered()
{
    session->setVisible(false);
    adminScroll->setVisible(false);
    managerScroll = new QScrollArea(this);
    publicScroll(managerScroll);
}

//添加学生信息
void administration::on_addStudent_triggered()
{
    session->setVisible(false);
    managerScroll->setVisible(false);
    addStudentScroll = new QScrollArea(this);
    publicScroll(addStudentScroll);
    QMessageBox::information(NULL, QString("title"), QString("addstudent"));
}

//管理学生信息

void administration::on_studentInfo_triggered()
{
    session->setVisible(false);
    manageStudengScroll = new QScrollArea(this);
    publicScroll(manageStudengScroll);
    QMessageBox::information(NULL, QString("title"), QString("manageStudengScroll"));
}

void administration::on_studnetDustbin_triggered()
{
    session->setVisible(false);
    studentDustbinScroll = new QScrollArea(this);
    publicScroll(studentDustbinScroll);
    QMessageBox::information(NULL, QString("title"), QString("success"));
}
