#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtSql/QSqlQuery>
#include <QCryptographicHash>
#include <QtCore/QCoreApplication>
#include <iostream>
#include <string>
#include <QString>
#include <QChar>
#include <QWidget>
#include <QPalette>
#include <QMessageBox>
#include <QScrollArea>
#include <QLabel>


#include "manage/administration.h"
#include <gitsql/sqlconn.h>
#include <home/regist.h>

using namespace std;

Welcome::Welcome(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Welcome)
{
    cout << QString("aaa").toStdString();
    QSqlDatabase db = (new Sqlconn())->conn();
    ui->setupUi(this);
}

Welcome::~Welcome()
{
    delete ui;
}
//判断字符串中间是否有空格
int deBlank(QString &strs){

    int temp = 0;
    for(int i=0; i<strs.length(); i++){
        if(strs.at(i).isSpace()){
            temp = 1;
        }
    }
    return temp;
}


//字符串信息加密处理
QString encryption(QString &pwd){

    QString pwdmd5;
    QByteArray ba;
    ba = QCryptographicHash::hash( pwd.toLatin1(), QCryptographicHash::Md5 );
    pwdmd5.append(ba.toHex());
    return pwdmd5;
}

void Welcome::on_Signin_clicked()
{

    QString account = ui->input_account->text();
    QString password = ui->input_password->text();
    int res_ac = deBlank(account);
    int res_pw = deBlank(password);
    //判断是否为空
    if(account.isEmpty() || password.isEmpty()){
        QMessageBox::information(NULL, QString("Waring"), QString("Please complete the login information"));
        return;
    }
    //判断是否有空格
    if(res_ac==1 || res_pw==1){
         QMessageBox::information(NULL, QString("Waring"), QString("Prohibition of spaces appear"));
         return;
    }

 //获取加密密码
    QString pwdmd5 = encryption(password);

 //启动数据库查询
    QSqlQuery query;
    query.exec("SELECT password FROM user where account ="+account);
    QString search_pasword;
    while (query.next()){
        search_pasword = query.value(0).toString();
    }

    if(pwdmd5 != search_pasword){
        QMessageBox::information(NULL, QString("title"), QString("Password input error"));
        ui->input_account->setText("");
        ui->input_password->setText("");
        return;
    }

    administration  *tt = new administration();
    tt->show();
    this->hide();
}

//注册
void Welcome::on_signup_clicked()
{
    regist *reg = new regist();
    reg->show();
}

//退出
void Welcome::on_legout_clicked()
{
    this->close();
}
