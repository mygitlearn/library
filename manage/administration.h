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

private slots:

    void on_personalInfo_triggered();
    void on_addStudent_triggered();
    void on_studentInfo_triggered();

    void on_studnetDustbin_triggered();

    void on_addbooks_triggered();
    
    void on_tidybooks_triggered();
    
    void on_sanitation_triggered();
    
    void on_annunciate_triggered();
    
private:
    Ui::administration *ui;
};

#endif // ADMINISTRATION_H
