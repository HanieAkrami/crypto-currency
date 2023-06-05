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

    connect(&signin , SIGNAL(homeClicked()) ,this, SLOT(moveHome()));
    connect(&login , SIGNAL(homeClicked()) ,this, SLOT(moveHome()));
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

void MainWindow::moveHome()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_actionNewFile_triggered()
{
    signin.URL = QFileDialog::getSaveFileName(this,"Save as");
}

void MainWindow::on_actionOpenFile_triggered()
{
    signin.URL = QFileDialog::getOpenFileName(this,"Open file");
}
