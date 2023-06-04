#ifndef SIGNIN_H
#define SIGNIN_H

#include <QDialog>
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>

namespace Ui {
class SignIn;
}

class SignIn : public QDialog
{
    Q_OBJECT

public:
    explicit SignIn(QWidget *parent = nullptr);
    ~SignIn();

private slots:
    void on_submit_clicked();

private:
    Ui::SignIn *ui;
    QString currentDir = "";
};

#endif // SIGNIN_H
