#include "administration.h"
#include "ui_administration.h"


#include <iostream>

using namespace std;

administration::administration(QMainWindow *parent) :
    QMainWindow(parent),
    ui(new Ui::administration)
{
    ui->setupUi(this);
}

administration::~administration()
{
    delete ui;
}
