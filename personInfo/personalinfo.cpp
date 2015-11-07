#include "personalinfo.h"
#include "ui_personalinfo.h"
#include "public/commonconfigure.h"
#include "mainwindow.h"

PersonalInfo::PersonalInfo(QWidget *parent) :
    QScrollArea(parent),
    ui(new Ui::PersonalInfo)
{

    //数据库操作:
    Welcome w;
    QString token = w.getUserToken();
    QMessageBox::about(this,"token值",token);


    QMessageBox::about(this,"",Welcome::token);
    //左边
    QWidget *leftWidget = new QWidget(this);
    leftWidget->setMaximumWidth(120);
    leftWidget->setMinimumWidth(120);


    //图片
    QScrollArea *leftScroll = new QScrollArea(leftWidget);
    leftScroll->setStyleSheet("border:none");

    QLabel *photoLabel = new QLabel(leftScroll);
    photoLabel->setGeometry(0,0,100,100);


    QPixmap pm;
    pm.load(":/new/prefix1/images/welcome.jpg");
    photoLabel->setPixmap(pm);

    QVBoxLayout *leftLayout = new QVBoxLayout(leftWidget);

    //上传图片
    QPushButton *photoButton = new QPushButton("上传图片",leftScroll);
    photoButton->setGeometry(0,120,100,30);
    leftLayout->addWidget(leftScroll);
    connect(photoButton,SIGNAL(clicked(bool)),this,SLOT(uploadPhoto()));



    //右边
    tabWidget = new QTabWidget(this);

    QWidget *right_widget_first = new QWidget();
    addFirstPanel(tabWidget,right_widget_first);

    QWidget *right_widget_second = new QWidget();
    addSecondPanel(tabWidget,right_widget_second);


    QWidget *right_widget_third = new QWidget();
    addThirdPanel(tabWidget,right_widget_third);



    //整个布局
    QHBoxLayout *layout = new QHBoxLayout();
    layout->addWidget(leftWidget);
    layout->addWidget(tabWidget);


    this->setLayout(layout);
    ui->setupUi(this);
}


PersonalInfo::~PersonalInfo()
{
    delete ui;
}

void PersonalInfo::addTitle(QWidget *widget, const QString &str1, const QString &str2)
{
    //添加组件
    QLabel *standardIcon = new QLabel(widget);
    standardIcon->setGeometry(20,0,60,60);
    standardIcon->setMaximumSize(60,60);
    standardIcon->setMinimumSize(60,60);
    standardIcon->setText(str1);
    standardIcon->show();

    standardIcon->setStyleSheet("border:1px groove gray;border-radius:5px;background-color:rgba(172,241,146,1);background-image: url(:/new/prefix1/images/welcome.jpg);");

    //账户信息
    QLabel *titleLabel = new QLabel(widget);
    titleLabel->setGeometry(90,10,70,40);

    titleLabel->setText(str2);
    titleLabel->setStyleSheet("color:red");

    titleLabel->setFont(*PERSONAL_INFO_FONT);
}

void PersonalInfo::setLableTitle(QLabel *label,QWidget *parentWidget,const QString &title, int x, int y, int width, int height, QFont *font, const QString& styleSheet)
{
    label = new QLabel(parentWidget);
    label->setGeometry(x,y,width,height);
    label->setText(title);
    label->setFont(*font);
    label->setStyleSheet(styleSheet);

}



//添加第一个面板，即个人信息
void PersonalInfo::addFirstPanel(QTabWidget *tabWidget,QWidget *widget)
{
    //字体颜色
    QPalette fontColorPalette;
    fontColorPalette.setColor(QPalette::WindowText,Qt::white);

    //字体大小
    QFont *fontSize = new QFont("Timers",14,QFont::Normal);

    //设置标题
    addTitle(widget,"aa","dd");


    //设置背景颜色
    QPalette palette;
    palette.setColor(QPalette::Background,QColor(0,0,0));
    widget->setPalette(palette);



    //横线
    QLabel *lineLable = new QLabel(widget);
    lineLable->setGeometry(90,10,widget->frameSize().width()-90,2);
    lineLable->setStyleSheet("background-color:rgba(120,172,247,0)");

    //账户:
    QLabel *nameTitleLable = NULL;
    setLableTitle(nameTitleLable,widget,QString("姓       名 : "),120,50,70,40,PERSONAL_INFO_FONT_LABEL,PERSONAL_INFO_COLOR_LABEL);

    QLineEdit *nameValue = new QLineEdit(widget);
    nameValue->setGeometry(200,53,100,27);

    //性别
    QLabel *sexTitleLabel = NULL;
    setLableTitle(sexTitleLabel,widget,QString("性       别 : "),120,80,70,40,PERSONAL_INFO_FONT_LABEL,PERSONAL_INFO_COLOR_LABEL);


    QLineEdit *sexValue = new QLineEdit(widget);
    sexValue->setGeometry(200,83,100,27);

    //年龄
    QLabel *ageTitleLabel = NULL;
    setLableTitle(ageTitleLabel,widget,QString("年       龄 : "),120,110,70,40,PERSONAL_INFO_FONT_LABEL,PERSONAL_INFO_COLOR_LABEL);

    QLineEdit *ageValue = new QLineEdit(widget);
    ageValue->setGeometry(200,113,100,27);

    //学号
    QLabel *numTitleLable = NULL;
    setLableTitle(numTitleLable,widget,QString("学       号 : "),120,140,70,40,PERSONAL_INFO_FONT_LABEL,PERSONAL_INFO_COLOR_LABEL);


    QLineEdit *numValue = new QLineEdit(widget);
    numValue->setGeometry(200,143,100,27);

    //学院
    QLabel *sdeptTitleLabel = NULL;
    setLableTitle(sdeptTitleLabel,widget,QString("学       院 : "),120,170,70,40,PERSONAL_INFO_FONT_LABEL,PERSONAL_INFO_COLOR_LABEL);

    QLineEdit *sdeptValue = new QLineEdit(widget);
    sdeptValue->setGeometry(200,173,100,27);
//    QComboBox *sdept
    //专业
    QLabel *majorTitleLabel = new QLabel(widget);
    setLableTitle(majorTitleLabel,widget,QString("专       业 : "),120,200,70,40,PERSONAL_INFO_FONT_LABEL,PERSONAL_INFO_COLOR_LABEL);

    QLineEdit *majorValue = new QLineEdit(widget);
    majorValue->setGeometry(200,203,100,27);

    //班级
    QLabel *classTitleLabel = NULL;
    setLableTitle(classTitleLabel,widget,QString("班       级 : "),120,230,70,40,PERSONAL_INFO_FONT_LABEL,PERSONAL_INFO_COLOR_LABEL);

    QLineEdit *classValue = new QLineEdit(widget);
    classValue->setGeometry(200,233,100,27);

    //联系方式
    QLabel *phoneLabel = NULL;
    setLableTitle(phoneLabel,widget,QString("联系方式 : "),120,260,70,40,PERSONAL_INFO_FONT_LABEL,PERSONAL_INFO_COLOR_LABEL);

    QLineEdit *phoneValue = new QLineEdit(widget);
    phoneValue->setGeometry(200,263,100,27);

     //邮箱
    QLabel *emailTitleLabel = NULL;
    setLableTitle(phoneLabel,widget,QString("邮       箱 : "),120,290,70,40,PERSONAL_INFO_FONT_LABEL,PERSONAL_INFO_COLOR_LABEL);

    QLineEdit *emailValue = new QLineEdit(widget);
    emailValue->setGeometry(200,293,100,27);


    //修改按钮
    QPushButton *alertButton = new QPushButton("修改",widget);
    alertButton->setGeometry(120,330,70,40);
    alertButton->setFont(*fontSize);

    //保存
    QPushButton *saveButton = new QPushButton("保存",widget);
    saveButton->setGeometry(210,330,70,40);
    saveButton->setFont(*fontSize);


    tabWidget->addTab(widget,"个人信息");

}



//添加第二个面板,即修改密码；
void PersonalInfo::addSecondPanel(QTabWidget *tabWidget,QWidget *widget)
{
    //第二个页面
    addTitle(widget,QString("bb"),QString("修改密码"));

    //旧密码:
    QLabel *oldPwdLabel = NULL;
    setLableTitle(oldPwdLabel,widget,QString("旧  密  码 : "),120,50,70,40,PERSONAL_INFO_FONT_LABEL,PERSONAL_INFO_COLOR_LABEL);

    QLineEdit *oldPwdLineEditValue = new QLineEdit();
    setTextEdit(oldPwdLineEditValue,widget,200,53,100,27);

    //新密码：
    QLabel *newPwdLabel = NULL;
    setLableTitle(newPwdLabel,widget,QString("新  密  码 : "),120,90,70,40,PERSONAL_INFO_FONT_LABEL,PERSONAL_INFO_COLOR_LABEL);

    QLineEdit *newPwdLineEditValue = new QLineEdit();
    setTextEdit(newPwdLineEditValue,widget,200,93,100,27);
    //确认新密码：
    QLabel *confirmNewPwdLabel = NULL;
    setLableTitle(confirmNewPwdLabel,widget,QString("确认密码 : "),120,120,70,40,PERSONAL_INFO_FONT_LABEL,PERSONAL_INFO_COLOR_LABEL);

    QLineEdit *confirmPwdLineEditValue = new QLineEdit();
    setTextEdit(confirmPwdLineEditValue,widget,200,130,100,27);

    //保存按钮
    QPushButton *saveButton = new QPushButton("保存",widget);
    saveButton->setGeometry(120,170,70,40);


    //重置
    QPushButton *resetButton = new QPushButton("重置",widget);
    resetButton->setGeometry(210,170,70,40);




    tabWidget->addTab(widget,"修改密码");
}

//添加第三个面板，即违纪情况
void PersonalInfo::addThirdPanel(QTabWidget *tabWidget,QWidget *widget)
{
    //第三个页面
    addTitle(widget,QString("cc"),QString("违纪情况"));

    tabWidget->addTab(widget,"违纪情况");
}

//================================
//文本框的设置
void PersonalInfo::setTextEdit(QLineEdit *lineEdit,QWidget *parentWidget,int x,int y,int width,int height)
{
    lineEdit->setParent(parentWidget);
    lineEdit->setGeometry(x,y,width,height);
}

//================
//上传头像
void PersonalInfo::uploadPhoto()
{
//    QMessageBox::about(this,"上传图片","请联系管理员");
}
