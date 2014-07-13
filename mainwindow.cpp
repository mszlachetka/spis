#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "eitem.h"
#include "pugiconfig.hpp"
#include "pugixml.hpp"
#include "string.h"
#include "sstream"
#include <QMessageBox>

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
    nrglobal=1;
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
           addItem(0);
}
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
    ui->listWidget->clear();
    eitem *przedmiot= new eitem;
    nrglobal=1;
    przedmiot->nazwa=text;
    przedmiot->ilosc=ammount;
    przedmiot->typ=typ;
    przedmiot->mIcon=mIcon;

    Eitm_vect.push_back(przedmiot);
    if(ui->listWidget->count()!=0) addItem(getnumber());
    else addItem(0);

}
void MainWindow::on_pushButton_2_clicked()
{

    if(!Eitm_vect.isEmpty() && ui->listWidget->isItemSelected(ui->listWidget->currentItem()))
    {

   if(Eitm_vect.size()>=1 && getnumber()!=Eitm_vect.size()) Eitm_vect.remove(getnumber());
    else if(getnumber()==Eitm_vect.size()) Eitm_vect.removeLast();


    if(ui->listWidget->count()!=0) addItem(getnumber());


    else addItem(0);
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

            for(int i=0; i<Eitm_vect.size();i++)
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
    nrglobal=1;
    QString check;
    for(int i=0;i<Eitm_vect.size();i++)
    {
         check=Eitm_vect.at(i)->nazwa+ " "+QString::number(Eitm_vect.at(i)->ilosc)+" "+Eitm_vect.at(i)->typ;
        if(check.contains(ui->lineEdit->text()))
        {

                QListWidgetItem *itm=new QListWidgetItem(Eitm_vect.at(i)->mIcon
                                     ,QString::number(Eitm_vect.at(i)->nrporz)+"[ "+Eitm_vect.at(i)->typ+ " ][ "+Eitm_vect.at(i)->nazwa+" ][ "+QString::number(Eitm_vect.at(i)->ilosc)+" ]",0,0);
               ui->listWidget->addItem(itm);
        }
    }
}

void MainWindow::on_pushButton_4_clicked()
{
    if(!Eitm_vect.isEmpty() && ui->listWidget->isItemSelected(ui->listWidget->currentItem()))
    {
    Eitm_vect.at(getnumber())->ilosc++;

    if(ui->listWidget->count()!=0) addItem(getnumber());
    else addItem(0);
    }
}

void MainWindow::addItem(int lastone)
{
    nrglobal=1;


    ui->listWidget->clear();
    for(int i=0;i<Eitm_vect.size();i++)
    {
    Eitm_vect.at(i)->nazwa+ " "+QString::number(Eitm_vect.at(i)->ilosc)+" "+Eitm_vect.at(i)->typ;
    Eitm_vect.at(i)->nrporz=nrglobal;
     QListWidgetItem *itm=new QListWidgetItem(Eitm_vect.at(i)->mIcon
                          ,QString::number(Eitm_vect.at(i)->nrporz)+"[ "+Eitm_vect.at(i)->typ+ " ][ "+Eitm_vect.at(i)->nazwa+" ][ "+QString::number(Eitm_vect.at(i)->ilosc)+" ]",0,0);

    ui->listWidget->addItem(itm);
    nrglobal++;
    }
    ui->listWidget->setCurrentRow(lastone);

    ui->listWidget->show();

if(Eitm_vect.size()<10)
{
ui->listWidget->setMaximumHeight(19*(Eitm_vect.size()+1));
ui->listWidget->setMinimumHeight(19*(Eitm_vect.size()+1));
}

}

void MainWindow::on_pushButton_5_clicked()
{
    if(!Eitm_vect.isEmpty() && ui->listWidget->isItemSelected(ui->listWidget->currentItem()))
    {
    if(Eitm_vect.at(getnumber())->ilosc>0) Eitm_vect.at(getnumber())->ilosc--;

    if(ui->listWidget->count()!=0) addItem(getnumber());
    else addItem(0);

    }
}

int MainWindow::getnumber()
{
    int i=0;
    int mNumber=0;
    while(ui->listWidget->currentItem()->text().at(i).isDigit())
    {
       mNumber=mNumber*10;
    mNumber=mNumber+(ui->listWidget->currentItem()->text().at(i).digitValue());

    i++;
    }
    mNumber--;
    return mNumber;
}



void MainWindow::on_lineEdit_returnPressed()
{
    ui->listWidget->clear();
    nrglobal=1;
    QString check;
    for(int i=0;i<Eitm_vect.size();i++)
    {
         check=Eitm_vect.at(i)->nazwa+ " "+QString::number(Eitm_vect.at(i)->ilosc)+" "+Eitm_vect.at(i)->typ;
        if(check.contains(ui->lineEdit->text()))
        {

                QListWidgetItem *itm=new QListWidgetItem(Eitm_vect.at(i)->mIcon
                                     ,QString::number(Eitm_vect.at(i)->nrporz)+"[ "+Eitm_vect.at(i)->typ+ " ][ "+Eitm_vect.at(i)->nazwa+" ][ "+QString::number(Eitm_vect.at(i)->ilosc)+" ]",0,0);
               ui->listWidget->addItem(itm);
        }
    }
}

void MainWindow::on_action_triggered()
{
    mSkroty=new skroty(this);
    mSkroty->show();


}
