#ifndef SQLCONN_H
#define SQLCONN_H
#include <QtSql/QSqlDatabase>

class Sqlconn
{
public:
//    QSqlDatabase conn() {
//        QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
//        db.setHostName("localhost");
//        db.setDatabaseName("library");
//        db.setUserName("root");
//        db.setPassword("");
//        db.open();
//        return db;
//    }
    QSqlDatabase conn();
    int aa();

};

#endif // SQLCONN_H
