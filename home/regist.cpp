#include "regist.h"
#include "ui_regist.h"

regist::regist(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::regist)
{
    ui->setupUi(this);
}

regist::~regist()
{
    delete ui;
}
