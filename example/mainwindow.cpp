#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <mylib.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    DuarteCorporation::Mylib mlib;
    mlib.start();
    DuarteCorporation::function1();
    DuarteCorporation::function2();
}

MainWindow::~MainWindow()
{
    delete ui;
}

