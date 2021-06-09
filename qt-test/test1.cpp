#include <QApplication>//包含QApplication头文件
#include <QPushButton>//包含QPushButton头文件

int main(int argc, char *argv[])// 还是标准的main函数
{
    QApplication app(argc, argv);// 构造应用,同MFC中的WinApp
    QPushButton hello("Hello world!");// 构造PushButton
    hello.resize(100, 30);// 设置按钮大小
    hello.show();// 显示按钮

    return app.exec();// 执行应用,同MFC中的Run
}