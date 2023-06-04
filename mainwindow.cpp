#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->stackedWidget);
    ui->stackedWidget->insertWidget(1,&signin);
    ui->stackedWidget->insertWidget(2,&login);
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


void MainWindow::on_actionQuit_triggered()
{
    this->close();
}

void MainWindow::on_login_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}
