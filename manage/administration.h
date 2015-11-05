#ifndef ADMINISTRATION_H
#define ADMINISTRATION_H

#include <QWidget>
#include <QMainWindow>
#include <QScrollArea>
#include <QSemaphore>
#include <QPushButton>
#include <QLabel>
#include <QChar>
#include <QString>
#include <QFont>
#include <QLineEdit>
#include <QTextEdit>
#include <QComboBox>        //下拉列表类
#include <QPushButton>

#include "publicUse/publicuse.h"

#include <personInfo/personalinfo.h>

namespace Ui {
class administration;
}

class administration : public QMainWindow
{
    Q_OBJECT


public:
    explicit administration(QMainWindow *parent = 0);
    ~administration();
    void publicScroll(QScrollArea *scrollName);


    const static int width = 800;
    const static int height =600;
    const static int x = 0;
    const static int y = 23;



    QScrollArea *session;       //定义一个空的全局变量，存放每一个当前打开的容器，以便下一个容器关闭当前


    //管理员登陆界面初始化容器;
    QScrollArea *adminScroll;
    //管理员个人信息;
    PersonalInfo *personInfoPanel;

    //添加学生信息; 管理学生信息（写、改、删、查）; 删除的学生信息暂存站
    QScrollArea *addStudentScroll, *manageStudengScroll, *studentDustbinScroll;
    QScrollArea *addBlooksScroll;   //增加图书
    QScrollArea *neatenBooksScroll, *clearSanitation, *informationScroll;     //整理图书; 卫生管理；信息通知

    QPushButton *search;//查询
    //标签信息
    QLabel *lab_studentName, *lab_studentSex, *lab_studentAge, *lab_studentNo;  //学生姓名，学生性别，学生年龄，学生学号
    QLabel  *lab_studentCollege, *lab_studetMajor, *lab_studentClass;           //学生所在学院，学生专业,学生班级
    QLabel *lab_studentPhone, *lab_studentEmail, *lab_studentDiscipline;        //学生联系方式，学生邮箱，学生违纪记录
    //与标签对应的输入框
    QTextEdit *studentNameText, *studentSexText, *studentAgeText, *studentNoText;  //学生姓名，学生性别，学生年龄，学生学号
    QTextEdit *studentPhoneText, *studentEmailText, *studentDisciplineText;        //学生联系方式，学生邮箱,学生违纪记录
    //下拉列表
    QComboBox  *studentCollegeBox, *studetMajorBox, *studentClassBox;           //学生所在学院，学生专业,学生班级

    QFont ft;
    QPushButton *pb_submit, *pb_return;
    publicUse *pu; //实例化publicUse(公共应用函数类)

private slots:

    void on_personalInfo_triggered();
    void on_addStudent_triggered();
    void on_studentInfo_triggered();
    void on_studnetDustbin_triggered();
    void on_addbooks_triggered();
    void on_tidybooks_triggered();
    void on_sanitation_triggered();
    void on_annunciate_triggered();
    void on_tidybooks_triggered();
    void on_sanitation_triggered();
    void on_annunciate_triggered();


private:
    Ui::administration *ui;
};

#endif // ADMINISTRATION_H
