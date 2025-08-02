#include "mainwindow.h"
#include "./ui_mainwinindow.h"

MainWinindow::MainWinindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWinindow)
{
    ui->setupUi(this);
}

MainWinindow::~MainWinindow()
{
    delete ui;
}
