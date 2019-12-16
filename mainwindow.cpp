#include "mainwindow.h"
#include "ui_mainwindow.h"

//QT中的printf
#include <qdebug.h>

//构造函数  MainWindow 类名   MainWindow构造函数名    QMainWindow  参数列表 （父类）   ui （界面）
MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    int num1, num2, sum;
    num1 = ui->laber_num1->text().toInt();
    num2 = ui->label_num2->text().toInt();

    sum = num1 + num2;

    ui->label_sum->setText(QString::number(sum));

//    int a = 10086;
//    QString aa = QString::number(a);
//    ui->small->setText(aa);

//    QStringList::iterator head;
//    QString path = "/home/bbigq/workspace/QT/build-QtFirstExp-Desktop_Qt_5_13_2_GCC_64bit-Debug/QtFirstExp";
//    QStringList duanList = path.split("/");

//    for(head = duanList.begin(); head != duanList.end(); head++)
//    {
//        head->remove("e");
//        qDebug() << *head;
//    }

//    //创建一个新的标签
//    QLabel *label2;          //标签
//    label2 = new QLabel(this);
//    label2->setObjectName(QString::fromUtf8("label"));
//    label2->setGeometry(QRect(100, 100, 321, 101));

//    //设置字体
//    QFont font;
//    font.setPointSize(30);
//    label2->setFont(font);

//    label2->setText(QCoreApplication::translate("MainWindow", "啊～～～～", nullptr));

}

MainWindow::~MainWindow()
{



    delete ui;
}

