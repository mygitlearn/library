/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Welcome
{
public:
    QWidget *centralWidget;
    QLabel *acount;
    QLabel *password;
    QPlainTextEdit *input_account;
    QPlainTextEdit *input_password;
    QPushButton *login;
    QPushButton *register_2;
    QPushButton *legout;
    QToolBar *mainToolBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Welcome)
    {
        if (Welcome->objectName().isEmpty())
            Welcome->setObjectName(QStringLiteral("Welcome"));
        Welcome->resize(466, 405);
        Welcome->setStyleSheet(QStringLiteral("background-color: rgb(15, 125, 176);"));
        centralWidget = new QWidget(Welcome);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        acount = new QLabel(centralWidget);
        acount->setObjectName(QStringLiteral("acount"));
        acount->setGeometry(QRect(70, 90, 41, 21));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(12);
        acount->setFont(font);
        password = new QLabel(centralWidget);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(70, 150, 41, 16));
        password->setFont(font);
        input_account = new QPlainTextEdit(centralWidget);
        input_account->setObjectName(QStringLiteral("input_account"));
        input_account->setGeometry(QRect(130, 90, 181, 21));
        input_password = new QPlainTextEdit(centralWidget);
        input_password->setObjectName(QStringLiteral("input_password"));
        input_password->setGeometry(QRect(130, 150, 181, 21));
        login = new QPushButton(centralWidget);
        login->setObjectName(QStringLiteral("login"));
        login->setGeometry(QRect(70, 270, 75, 23));
        login->setFont(font);
        register_2 = new QPushButton(centralWidget);
        register_2->setObjectName(QStringLiteral("register_2"));
        register_2->setGeometry(QRect(190, 270, 75, 23));
        register_2->setFont(font);
        legout = new QPushButton(centralWidget);
        legout->setObjectName(QStringLiteral("legout"));
        legout->setGeometry(QRect(310, 270, 75, 23));
        legout->setFont(font);
        Welcome->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(Welcome);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Welcome->addToolBar(Qt::TopToolBarArea, mainToolBar);
        toolBar = new QToolBar(Welcome);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        Welcome->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(Welcome);

        QMetaObject::connectSlotsByName(Welcome);
    } // setupUi

    void retranslateUi(QMainWindow *Welcome)
    {
        Welcome->setWindowTitle(QApplication::translate("Welcome", "welcome", 0));
        acount->setText(QApplication::translate("Welcome", "\350\264\246 \345\217\267\357\274\232", 0));
        password->setText(QApplication::translate("Welcome", "\345\257\206 \347\240\201\357\274\232", 0));
        login->setText(QApplication::translate("Welcome", "\347\231\273\345\275\225", 0));
        register_2->setText(QApplication::translate("Welcome", "\346\263\250\345\206\214", 0));
        legout->setText(QApplication::translate("Welcome", "\351\200\200\345\207\272", 0));
        toolBar->setWindowTitle(QApplication::translate("Welcome", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class Welcome: public Ui_Welcome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
