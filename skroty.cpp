#include "skroty.h"
#include "ui_skroty.h"
#include <QSize>

skroty::skroty(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::skroty)
{
    ui->setupUi(this);
    setWindowTitle("SKRÓTY");
}
skroty::~skroty()
{
    delete ui;
}

void skroty::on_pushButton_clicked()
{
    this->close();
}
