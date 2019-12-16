#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
//定义一个命名空间，在命名空间中声明 mainwindow  类
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

//定义一个 MainWindow 类 继承 QMainWindow
class MainWindow : public QMainWindow
{
    //QT必须使用的一个宏，用于信号与槽的实现
    Q_OBJECT

public:
    //构造函数
    MainWindow(QWidget *parent = nullptr);
    //析构函数
    ~MainWindow();

private:
    //定义一个私有成员，便于区分代码逻辑区和UI界面
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
