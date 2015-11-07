#include "sqlconn.h"

QSqlDatabase  Sqlconn::conn() {
    QSqlDatabase db;
    if(QSqlDatabase::contains("qt_sql_default_connection")){
        db = QSqlDatabase::database("qt_sql_default_connection");
    }else{
        db = QSqlDatabase::addDatabase("QMYSQL");
    }
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
