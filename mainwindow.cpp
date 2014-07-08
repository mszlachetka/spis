#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "eitem.h"
#include <QWindow>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);   

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    mDialog= new Dialog(this);//main jako parent
   mDialog->show();
   QObject::connect(mDialog, SIGNAL(newTextEntered(const QString&,const double&)),this, SLOT(onNewTextEntered(const QString&,const double&)));


}

void MainWindow::onNewTextEntered(const QString &text,const double &ammount)
{
    eitem *przedmiot= new eitem;
    przedmiot->nazwa=text;
    przedmiot->ilosc=ammount;
    Eitm_vect.push_back(przedmiot);
    if(Eitm_vect.size()<20) ui->listWidget->setMinimumHeight(Eitm_vect.size()*19);

    ui->listWidget->addItem(QString:: number(Eitm_vect.size())+" "+ przedmiot->nazwa + " "+QString::number(przedmiot->ilosc));
    ui->listWidget->setSizePolicy(QSizePolicy::Ignored,QSizePolicy::Ignored);

}
