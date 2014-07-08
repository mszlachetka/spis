#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "eitem.h"
#include "pugiconfig.hpp"
#include "pugixml.hpp"
#include "string.h"
#include "sstream"

#include <iostream>

#include <QWindow>

using namespace pugi;
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("SPIS ELEKTRONIKI");





    xml_document doc;
        if(doc.load_file("doc.xml"))
        {
            xml_node spis = doc.child("Spis");
            for(xml_node przed=spis.child("przedmiot");przed;przed=przed.next_sibling("przedmiot"))
            {
                eitem *teitm= new eitem;

                stringstream ss;
                ss<<przed.attribute("ilosc").value();
                int  ilosc=0;
                ss>>ilosc;
                teitm->ilosc=ilosc;
               teitm->nazwa=przed.attribute("nazwa").value();
               teitm->typ=przed.attribute("typ").value();
            Eitm_vect.push_back(teitm);
            }
            if(Eitm_vect.size()<10) ui->listWidget->setMinimumHeight((Eitm_vect.size())*19);
            ui->listWidget->clear();
            for(int i=0;i<Eitm_vect.size();i++)
            {
            Eitm_vect.at(i)->nazwa+ " "+QString::number(Eitm_vect.at(i)->ilosc)+" "+Eitm_vect.at(i)->typ;

             QListWidgetItem *itm=new QListWidgetItem(Eitm_vect.at(i)->mIcon
                                  ,"[ "+Eitm_vect.at(i)->typ+ " ][ "+Eitm_vect.at(i)->nazwa+" ][ "+QString::number(Eitm_vect.at(i)->ilosc)+" ]",0,0);
            ui->listWidget->addItem(itm);
            ui->listWidget->setSizePolicy(QSizePolicy::Ignored,QSizePolicy::Ignored);
            }
            ui->listWidget->show();
            }


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    mDialog= new Dialog(this);
    QObject::connect(mDialog, SIGNAL(newTextEntered(const QString&,const double&,
 const QString&,const QIcon&)),this, SLOT(onNewTextEntered(const QString&,
  const double&,const QString&,const QIcon &)));
   mDialog->show();


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

     QListWidgetItem *itm=new QListWidgetItem(Eitm_vect.at(i)->mIcon
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
    xml_document doc;
            xml_node spis = doc.append_child("Spis");
            spis.append_attribute("Tytul")="ELEKTRONIKA";

            for(unsigned int i=0; i<Eitm_vect.size();i++)
                    {
                        xml_node przedmiot = spis.append_child("przedmiot");

                        przedmiot.append_attribute("typ") =Eitm_vect.at(i)->typ.toStdString().c_str();
                        przedmiot.append_attribute("ilosc") = Eitm_vect.at(i)->ilosc;
                        przedmiot.append_attribute("nazwa") =Eitm_vect.at(i)->nazwa.toStdString().c_str();
            }

            doc.save_file("doc.xml");



   QApplication::quit();
}




void MainWindow::on_actionO_Qt_triggered()
{
    QApplication::aboutQt();
}

void MainWindow::on_lineEdit_textChanged(const QString )
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
