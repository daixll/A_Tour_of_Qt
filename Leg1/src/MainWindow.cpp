#include "include/MainWindow.h"

MainWindow::MainWindow(QWidget *parent) // 这里的parent是可选的
    : QMainWindow(parent)               // 构造函数的初始化列表
{
    // 在这里进行主窗口的初始化操作
    this -> setWindowTitle("Hello Qt!");// 设置窗口标题
    _label = new QLabel(this);          // 创建一个标签
    _label -> setText("Hello Qt!!!");     // 设置标签的文本
}

MainWindow::~MainWindow()
{   
    delete _label;                      // 释放内存
    // 在这里进行资源的清理工作（如果需要）
}