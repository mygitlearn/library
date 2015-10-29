#include "sqlconn.h"

QSqlDatabase  Sqlconn::conn() {
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("library");
    db.setUserName("root");
    db.setPassword("");
    db.open();
    return db;
}

int Sqlconn::aa(){
    return 5856895;
}
