#-------------------------------------------------
#
# Project created by QtCreator 2015-10-23T21:48:29
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = library
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    home/login.cpp \
    gitsql/sqlconn.cpp \
    manage/administration.cpp \
    home/regist.cpp \
    personInfo/personalinfo.cpp




HEADERS  += mainwindow.h \
    home/login.h \
    gitsql/sqlconn.h \
    manage/administration.h \
    home/regist.h \
    personInfo/personalinfo.h \
    public/publicheader.h \
    public/commonconfigure.h


FORMS    += mainwindow.ui \
    manage/administration.ui \
    home/regist.ui \
    personInfo/personalinfo.ui

RESOURCES += \
    images.qrc
