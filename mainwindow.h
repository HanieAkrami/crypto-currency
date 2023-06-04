#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <signin.h>
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
    
    void on_stackedWidget_currentChanged(int arg1);

    void on_actionQuit_triggered();


private:
    Ui::MainWindow *ui;
    SignIn signin;
};
#endif // MAINWINDOW_H
