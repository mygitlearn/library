#include "administration.h"
#include "ui_administration.h"

#include <QMessageBox>
#include <QPalette>
#include <QString>
#include <QWidget>
#include <QScrollArea>
#include <QLineEdit>
#include <QTextEdit>
#include <QComboBox>

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
    ft.setPointSize(12);    //定义字体大小
    pu = new publicUse();
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
    publicScroll(addStudentScroll);                     //生成scrollArea容器
    pu->publicLabel(addStudentScroll,lab_studentName,QString::fromLocal8Bit("姓 名 ："),80,50,80,25);
    pu->publicLabel(addStudentScroll,lab_studentSex,QString::fromLocal8Bit("性 别 ："),80,85,80,25);
    pu->publicLabel(addStudentScroll,lab_studentAge,QString::fromLocal8Bit("年 龄 ："),80,120,80,25);
    pu->publicLabel(addStudentScroll,lab_studentNo,QString::fromLocal8Bit("学 号 ："),80,155,80,25);
    pu->publicLabel(addStudentScroll,lab_studentCollege,QString::fromLocal8Bit("学 院 ："),80,190,80,25);
    pu->publicLabel(addStudentScroll,lab_studetMajor,QString::fromLocal8Bit("专 业 ："),80,225,80,25);
    pu->publicLabel(addStudentScroll,lab_studentClass,QString::fromLocal8Bit("班 级 ："),80,260,80,25);
    pu->publicLabel(addStudentScroll,lab_studentPhone,QString::fromLocal8Bit("电 话 ："),80,295,80,25);
    pu->publicLabel(addStudentScroll,lab_studentEmail,QString::fromLocal8Bit("邮 箱 ："),80,330,80,25);
    pu->publicLabel(addStudentScroll,lab_studentDiscipline,QString::fromLocal8Bit("违 纪 ："),80,365,80,25);

    pu->publicTextEdit(addStudentScroll,studentNameText,165,50,200,25);
    pu->publicTextEdit(addStudentScroll,studentNameText,165,85,200,25);
    pu->publicTextEdit(addStudentScroll,studentNameText,165,120,200,25);
    pu->publicTextEdit(addStudentScroll,studentNameText,165,155,200,25);
    pu->publicComboBox(addStudentScroll,studentCollegeBox,165,190,200,25);
    pu->publicComboBox(addStudentScroll,studentCollegeBox,165,225,200,25);
    pu->publicComboBox(addStudentScroll,studentCollegeBox,165,260,200,25);
    pu->publicTextEdit(addStudentScroll,studentNameText,165,295,200,25);
    pu->publicTextEdit(addStudentScroll,studentNameText,165,330,200,25);
    pu->publicTextEdit(addStudentScroll,studentNameText,165,365,500,120);

    pb_submit = new QPushButton(this);
    pb_submit->setText(QString::fromLocal8Bit("提 交"));
    pb_submit->setGeometry(10,10,100,30);
    pb_submit->setVisible(true);
}

//学生管理/管理学生信息
void administration::on_studentInfo_triggered()
{

    session->setVisible(false);
    manageStudengScroll = new QScrollArea(this);
    publicScroll(manageStudengScroll);
    pu->publicLabel(manageStudengScroll,lab_studentName,"nihao",50,50,80,30);
    pu->publicLabel(manageStudengScroll,lab_studentName,QString::fromLocal8Bit("好天气"),50,100,80,30);

   // QMessageBox::information(NULL, QString("title"), QString("manageStudengScroll"));
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
