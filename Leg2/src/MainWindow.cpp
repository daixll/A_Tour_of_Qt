#include "include/MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle("Hello Qt!");
    resize(800, 800);

    _layout         = new QVBoxLayout(this);
    _centralWidget  = new QWidget(this);
    _labeltext      = new QLabel(this);
    _labelimg       = new QLabel(this);

    _layout -> addWidget(_labeltext);   // 将文本标签添加到布局管理器
    _layout -> addWidget(_labelimg);    // 将图片标签添加到布局管理器

    _labeltext -> setText("666");                     // 设置文本标签
    _labelimg  -> setPixmap(QPixmap("./img/cqvie.jpg"));// 设置图片标签

    // 设置标签的对齐方式为居中
    _labeltext -> setAlignment(Qt::AlignCenter);
    _labelimg  -> setAlignment(Qt::AlignCenter);

    _centralWidget -> setLayout(_layout); // 设置中央部件的布局管理器
    setCentralWidget(_centralWidget);     // 设置中央部件
}

MainWindow::~MainWindow()
{
    delete _labelimg;
    delete _labeltext;
    delete _centralWidget;
    delete _layout;
}
