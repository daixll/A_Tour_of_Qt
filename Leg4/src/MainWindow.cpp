#include "include/MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    _centralWidget  = new QWidget(this);
    _gLayout        = new QGridLayout();
    _vLayout        = new QVBoxLayout();
    _one_A          = new QRadioButton();
    _one_B          = new QRadioButton();
    _one_C          = new QRadioButton();
    _one_group      = new QButtonGroup();
    _one_res        = new QLabel();

    setWindowTitle("Leg4 选择控件");
    setCentralWidget(_centralWidget);
    _centralWidget->setLayout(_gLayout);

    // 将垂直布局添加到 [0,0]，标签添加到 [0,1]
    _gLayout->addLayout(_vLayout, 0, 0);
    _gLayout->setAlignment(_vLayout, Qt::AlignCenter);  
    _gLayout->addWidget(_one_res, 0, 1);
    _gLayout->setAlignment(_one_res, Qt::AlignCenter);

    // 设置单选按钮的文本
    _one_A->setText("马克思");
    _one_B->setText("列宁");
    _one_C->setText("毛泽东");

    // 将单选按钮添加到垂直布局
    _vLayout->addWidget(_one_A);
    _vLayout->addWidget(_one_B);
    _vLayout->addWidget(_one_C);

    // 将单选按钮添加到单选按钮组
    _one_group->addButton(_one_A);
    _one_group->addButton(_one_B);
    _one_group->addButton(_one_C);

    // 设置单选按钮组的选择结果
    connect(_one_group, &QButtonGroup::buttonClicked, this, &MainWindow::_one_clicked);

}

void MainWindow::_one_clicked(){
    if(_one_A->isChecked()){
        _one_res->setPixmap(QPixmap("./img/mks.jpg"));
    } else if(_one_B->isChecked()){
        _one_res->setPixmap(QPixmap("./img/ln.jpg"));
    } else if(_one_C->isChecked()){
        _one_res->setPixmap(QPixmap("./img/mzd.jpg"));
    }
}

MainWindow::~MainWindow(){
    delete _centralWidget;
    delete _gLayout;
    delete _vLayout;
    delete _one_A;
    delete _one_B;
    delete _one_C;
    delete _one_group;
    delete _one_res;
}