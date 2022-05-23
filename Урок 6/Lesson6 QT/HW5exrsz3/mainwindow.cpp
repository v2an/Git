#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{

    filesystem* newwindow = new filesystem(this);
    newwindow->show();
}

MainWindow::~MainWindow()
{
}

