#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtSql/QSqlQuery>
#include <iostream>
#include <string>
#include <QWidget>
#include <QPalette>
#include <QMessageBox>


#include "manage/administration.h"
#include <gitsql/sqlconn.h>

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

    Sqlconn b;
    QSqlDatabase db = b.conn();

    QString account = ui->input_account->text();
    QString password = ui->input_password->text();



        QSqlQuery query;
        query.exec("SELECT * FROM user where id =1");
        QString salary;

        while (query.next()){
            int i=0;
            int name = query.value(0).toInt();
            salary = query.value(1).toString();
            //cout << salary << endl;
            i++;

        }
    QMessageBox::information(NULL, QString("title"), salary);



//      administration  *tt = new administration();
//      tt->show();
//      this->hide();

    //定义新窗口
    //    QWidget *student_management;
    //    student_management = new QWidget();
    //    student_management->setBaseSize(500,300);
    //    student_management->show();

}
