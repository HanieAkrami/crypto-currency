#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->insertWidget(1,&signin);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_quit_clicked()
{
    this->close();
}

void MainWindow::on_signup_clicked()
{
   ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_stackedWidget_currentChanged(int arg1)
{

}

void MainWindow::on_actionQuit_triggered()
{
    this->close();
}
