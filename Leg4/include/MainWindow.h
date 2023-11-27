#pragma once

#include <QMainWindow>
#include <QLayout>
#include <QRadioButton>
#include <QButtonGroup>
#include <QLabel>

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr); 
    ~MainWindow();
private:
    QWidget         *_centralWidget;
    QGridLayout     *_gLayout;          // 网格布局

    QVBoxLayout     *_vLayout;          // 垂直布局

    QButtonGroup    *_one_group;        // 单选按钮组
    QRadioButton    *_one_A;            // 单选按钮
    QRadioButton    *_one_B;
    QRadioButton    *_one_C;

    QLabel          *_one_res;          // 存放单选选择结果
    void            _one_clicked();     // 单选按钮组的选择结果

};