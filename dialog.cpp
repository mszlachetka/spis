#include "dialog.h"
#include "ui_dialog.h"
#include "eitem.h"
#include "mainwindow.h"
#include <QString>
#include <QIcon>
#include <QVariant>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    setWindowTitle("DODAJ ELEMENT");


}

Dialog::~Dialog()
{
    delete ui;
}





void Dialog::on_buttonBox_accepted()
{
    QVariant variant=ui->comboBox->currentData().Icon;
    QIcon icon=variant.value<QIcon>();

     if(ui->lineEdit_2->text().toDouble()!=0 && !ui->lineEdit->text().isEmpty())
         emit this->newTextEntered(ui->lineEdit->text(),ui->lineEdit_2->text().toDouble(),
                                  ui->comboBox->currentText(),icon);


}


