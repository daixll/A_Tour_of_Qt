#pragma once

#include <QMainWindow>
#include <QLayout>
#include <QLabel>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QVBoxLayout *_layout;       // 声明一个布局管理器
    QWidget     *_centralWidget;// 中央部件
    QLabel      *_labeltext;    // 声明一个文本标签
    QLabel      *_labelimg;     // 声明一个图片标签
};