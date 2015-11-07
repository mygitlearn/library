#ifndef PUBLICUSE_H
#define PUBLICUSE_H

#include <public/publicheader.h>


class publicUse
{
public:
    //publicUse();
    //定义添加label的公共函数，参数（容器所在的scroll名，定义的label名，label内容信息， label所在位置x,y,宽，高）
    void publicLabel(QWidget *widgetName, QLabel *labs,QString title, int lx, int ly, int lwidth, int lheight);
    void publicTextEdit(QWidget *widgetName, QTextEdit *les, int lx, int ly, int lwidth, int lheight);
    void publicComboBox(QWidget *widgetName, QComboBox *cbs, int cx, int cy, int cwidth, int cheight);
    void publicPushButton(QWidget *widgetName, QPushButton *cbs, char *info, int cx, int cy, int cwidth, int cheight);
    QFont ft;
};

#endif // PUBLICUSE_H
