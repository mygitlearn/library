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
    manage/administration.cpp




HEADERS  += mainwindow.h \
    home/login.h \
    gitsql/sqlconn.h \
    manage/administration.h


FORMS    += mainwindow.ui \
    manage/administration.ui
