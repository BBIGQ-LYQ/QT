//用户自定义的头文件
#include "mainwindow.h"
//系统头文件  QT 应用
#include <QApplication>

int main(int argc, char *argv[])
{
    //定义QT  应用对象   （生成了一个 QT 应用）
    QApplication a(argc, argv);

    //实例一个主窗口 主窗体
    MainWindow w;
    //显示主窗体
    w.show();
    //执行应用
    return a.exec();
}
