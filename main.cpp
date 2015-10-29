#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include <iostream>
#include <string>
#include <QtSql/QSqlQuery>

#include "gitsql/sqlconn.h"
#include "home/login.h"



using namespace std;


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Welcome w;

    w.show();
//    Sqlconn b;
//    QSqlDatabase db = b.conn();
//    QSqlQuery query;
//    query.exec("SELECT * FROM user");
//    QString salary;
//    while (query.next()){
//        int name = query.value(0).toInt();
//        salary = query.value(1).toString();
//        cout << name << endl;

//    }

    login lo;
    int numRows;
    numRows = lo.log();
    cout << numRows <<endl;
 //   QMessageBox::information(NULL, QString("title"), salary);
    return a.exec();
}
