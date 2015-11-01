#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include <iostream>
#include <string>
#include <QtSql/QSqlQuery>

#include"manage/administration.h"
#include "gitsql/sqlconn.h"
#include "home/login.h"


using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Welcome w;
    w.show();
    return a.exec();
}
