#ifndef SIGNIN_H
#define SIGNIN_H

#include <QDialog>
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>
#include <regex>

namespace Ui {
class SignIn;
}

class SignIn : public QDialog
{
    Q_OBJECT

public:
    explicit SignIn(QWidget *parent = nullptr);
    ~SignIn();
    QString URL = "";
private slots:
    void on_submit_clicked();

    void on_back_clicked();

private:
    Ui::SignIn *ui;
    QString currentDir = "";


signals:
    void homeClicked();
};

#endif // SIGNIN_H
