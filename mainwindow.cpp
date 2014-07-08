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
    przedmiot->mIcon=mIcon;
    Eitm_vect.push_back(przedmiot);
    if(Eitm_vect.size()<10) ui->listWidget->setMinimumHeight((Eitm_vect.size()+1)*19);
    ui->listWidget->clear();
    for(int i=0;i<Eitm_vect.size();i++)
    {
    Eitm_vect.at(i)->nazwa+ " "+QString::number(Eitm_vect.at(i)->ilosc)+" "+Eitm_vect.at(i)->typ;

     QListWidgetItem *itm=new QListWidgetItem(mIcon
                          ,"[ "+Eitm_vect.at(i)->typ+ " ][ "+Eitm_vect.at(i)->nazwa+" ][ "+QString::number(Eitm_vect.at(i)->ilosc)+" ]",0,0);
    ui->listWidget->addItem(itm);
    ui->listWidget->setSizePolicy(QSizePolicy::Ignored,QSizePolicy::Ignored);
    }

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

void MainWindow::on_pushButton_3_clicked()
{
   QApplication::quit();
}

void MainWindow::on_lineEdit_returnPressed()
{
    ui->listWidget->clear();
    QString check;
    for(int i=0;i<Eitm_vect.size();i++)
    {
         check=Eitm_vect.at(i)->nazwa+ " "+QString::number(Eitm_vect.at(i)->ilosc)+" "+Eitm_vect.at(i)->typ;
        if(check.contains(ui->lineEdit->text()))
        {
                QListWidgetItem *itm=new QListWidgetItem(Eitm_vect.at(i)->mIcon
                                     ,"[ "+Eitm_vect.at(i)->typ+ " ][ "+Eitm_vect.at(i)->nazwa+" ][ "+QString::number(Eitm_vect.at(i)->ilosc)+" ]",0,0);
               ui->listWidget->addItem(itm);
               ui->listWidget->setSizePolicy(QSizePolicy::Ignored,QSizePolicy::Ignored);
        }
    }


 }


void MainWindow::on_actionO_Qt_triggered()
{
    QApplication::aboutQt();
}
