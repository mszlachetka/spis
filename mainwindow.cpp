#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "eitem.h"
#include <QWindow>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("SPIS ELEKTRONIKI");


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    mDialog= new Dialog(this);//main jako parent
   mDialog->show();
   QObject::connect(mDialog, SIGNAL(newTextEntered(const QString&,const double&,const QString&,const QIcon&)),this, SLOT(onNewTextEntered(const QString&,const double&,const QString&,const QIcon &)));


}
void MainWindow::onNewTextEntered(const QString &text,const double &ammount,const QString &typ,const QIcon &mIcon)
{
    eitem *przedmiot= new eitem;

    przedmiot->nazwa=text;
    przedmiot->ilosc=ammount;
    przedmiot->typ=typ;
    Eitm_vect.push_back(przedmiot);
    if(Eitm_vect.size()<10) ui->listWidget->setMinimumHeight((Eitm_vect.size()+1)*19);
     przedmiot->nazwa+ " "+QString::number(przedmiot->ilosc)+" "+przedmiot->typ;

     QListWidgetItem *itm=new QListWidgetItem(mIcon
                          ,przedmiot->nazwa+ " "+QString::number(przedmiot->ilosc)+" "+przedmiot->typ,0,0);
    ui->listWidget->addItem(itm);
    ui->listWidget->setSizePolicy(QSizePolicy::Ignored,QSizePolicy::Ignored);

}

void MainWindow::on_pushButton_2_clicked()
{

    if(!Eitm_vect.isEmpty() && ui->listWidget->isItemSelected(ui->listWidget->currentItem()))
    {
        if(Eitm_vect.size()>=1)Eitm_vect.removeAt(ui->listWidget->currentRow());
     ui->listWidget->takeItem(ui->listWidget->currentRow());

    ui->listWidget->setMinimumHeight((Eitm_vect.size()+1)*19);
    ui->listWidget->setMaximumHeight((Eitm_vect.size()+1)*19);
    }





}







void MainWindow::on_listWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous)
{
    if(current!=NULL) current->setBackgroundColor(Qt::green);
   if(previous!=NULL) previous->setBackgroundColor(Qt::white);
}
