#ifndef EITEM_H
#define EITEM_H

#include <QString>
#include <QListWidgetItem>
class eitem
{
public:
    eitem();
    QString nazwa;
    double ilosc;
    QString typ;
    int nrporz=0;
    QIcon mIcon;

};

#endif // EITEM_H
