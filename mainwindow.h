#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <signin.h>
#include <login.h>

#include <QMainWindow>

#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_quit_clicked();
    void on_signup_clicked();
    void on_actionQuit_triggered();
    void on_login_clicked();

private:
    Ui::MainWindow *ui;
    SignIn signin;
    Login login;
};
#endif // MAINWINDOW_H
