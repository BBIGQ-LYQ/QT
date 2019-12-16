#include "mainwindow.h"
#include "ui_mainwindow.h"

//构造函数  MainWindow 类名   MainWindow构造函数名    QMainWindow  参数列表 （父类）   ui （界面）
MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    //mas
    delete ui;
}

