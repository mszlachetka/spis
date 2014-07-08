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
    QIcon mIcon;

};

#endif // EITEM_H
