#include "dialog.h"
#include "ui_dialog.h"
#include "eitem.h"
#include "mainwindow.h"
#include <QString>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

}

Dialog::~Dialog()
{
    delete ui;
}





void Dialog::on_buttonBox_accepted()
{
     if(ui->lineEdit_2->text().toDouble()!=0) emit this->newTextEntered(ui->lineEdit->text(),ui->lineEdit_2->text().toDouble());

}
