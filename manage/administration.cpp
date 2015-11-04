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
//    adminScroll->setBackgroundRole(QPalette::Base);
//    adminScroll->setGeometry(0,23,width,height);
//    adminScroll->setVisible(true);
//    session = adminScroll;
    publicScroll(adminScroll);
    ui->setupUi(this);
}

administration::~administration()
{
    delete ui;
}

//生成scrollArea容器的公共函数
void administration::publicScroll(QScrollArea *scrollName){
    scrollName->setBackgroundRole(QPalette::Base);
    scrollName->setGeometry(x,y,width,height);
    scrollName->setVisible(true);
    session = scrollName;
}

//个人信息/个人信息(管理员个人信息)
void administration::on_personalInfo_triggered()
{
    session->setVisible(false);
    managerScroll = new QScrollArea(this);
    publicScroll(managerScroll);
}

//学生管理/添加学生信息
void administration::on_addStudent_triggered()
{
    session->setVisible(false);
    addStudentScroll = new QScrollArea(this);
    publicScroll(addStudentScroll);
    QMessageBox::information(NULL, QString("title"), QString("addstudent"));
}

//学生管理/管理学生信息
void administration::on_studentInfo_triggered()
{
    session->setVisible(false);
    manageStudengScroll = new QScrollArea(this);
    publicScroll(manageStudengScroll);
    QMessageBox::information(NULL, QString("title"), QString("manageStudengScroll"));
}

//学生管理/信息回收站
void administration::on_studnetDustbin_triggered()
{
    session->setVisible(false);
    studentDustbinScroll = new QScrollArea(this);
    publicScroll(studentDustbinScroll);
    QMessageBox::information(NULL, QString("title"), QString("studentDustbinScroll"));
}

//图书管理/添加图书
void administration::on_addbooks_triggered()
{
    session->setVisible(false);
    addBlooksScroll = new QScrollArea(this);
    publicScroll(addBlooksScroll);
    QMessageBox::information(NULL, QString("title"), QString("addBlooksScroll"));
}

//事务安排/图书整理
void administration::on_tidybooks_triggered()
{
    session->setVisible(false);
    neatenBooksScroll = new QScrollArea(this);
    publicScroll(neatenBooksScroll);
    QMessageBox::information(NULL, QString("title"), QString("neatenBooksScroll"));
}

//事务管理/卫生清洁
void administration::on_sanitation_triggered()
{
    session->setVisible(false);
    clearSanitation = new QScrollArea(this);
    publicScroll(clearSanitation);
    QMessageBox::information(NULL, QString("title"), QString("clearSanitation"));
}

//事务管理/信息通告
void administration::on_annunciate_triggered()
{
    session->setVisible(false);
    informationScroll = new QScrollArea(this);
    publicScroll(informationScroll);
    QMessageBox::information(NULL, QString("title"), QString("informationScroll"));
}
