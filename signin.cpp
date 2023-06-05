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

    //QString url =  QFileDialog::getOpenFileName(this,"Open ...");

    if(URL == ""){
        QMessageBox::warning(this,"Not Found","file for save dont exist.");
    }
    QFile file(URL);
    if(file.open(QIODevice::Append)){
        QTextStream stream(&file);
        stream << name << "," << email << "," <<passwd<<endl;
        QMessageBox::about(this,"SignIn",name+" Dear signin sucssesfully. ");
        ui->nameIn->clear();
        ui->emailIn->clear();
        ui->passwordIn->clear();
    }
}

void SignIn::on_back_clicked()
{
    emit homeClicked();
}
