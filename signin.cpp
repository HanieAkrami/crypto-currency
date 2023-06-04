#include "signin.h"
#include "ui_signin.h"

SignIn::SignIn(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignIn)
{
    ui->setupUi(this);
}

SignIn::~SignIn()
{
    delete ui;
}

void SignIn::on_submit_clicked()
{
    QString name = ui->nameIn->text();
    QString email = ui->emailIn->text();
    QString passwd = ui->passwordIn->text();

    if(  name == ""){
        QMessageBox::warning(this,"Empty Field","some field is empty");
    }

//    QMessageBox::question(this,"Info","name : "+name+"\nemail:"+email+
//                          "\npasswd :"+passwd);

    QString url =  QFileDialog::getOpenFileName(this,"Open ...");
    QFile file(url);
    if(file.open(QIODevice::WriteOnly)){
        QTextStream stream(&file);
        stream << name << "," << email << "," <<passwd<<endl;
    }else{
        QString url =  QFileDialog::getSaveFileName(this,"Save as");
        QTextStream stream(&file);
        stream << name << "," << email << "," <<passwd<<endl;
    }

}
