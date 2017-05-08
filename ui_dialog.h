/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QFormLayout *formLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QFormLayout *formLayout;
    QLabel *label_3;
    QComboBox *comboBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(228, 143);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/plus.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Dialog->setWindowIcon(icon);
        gridLayout = new QGridLayout(Dialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(Dialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(Dialog);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEdit_2);


        gridLayout->addLayout(formLayout_2, 1, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        comboBox = new QComboBox(Dialog);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/akcesoria.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox->addItem(icon1, QString());
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/stabilizator.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox->addItem(icon2, QString());
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/modu\305\202.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox->addItem(icon3, QString());
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/joystick.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox->addItem(icon4, QString());
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/czujnik.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox->addItem(icon5, QString());
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/dioda_ir.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox->addItem(icon6, QString());
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/dioda_led.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox->addItem(icon7, QString());
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/dioda_zenera.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox->addItem(icon8, QString());
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/images/przycisk.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox->addItem(icon9, QString());
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/images/kondesator.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox->addItem(icon10, QString());
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/images/komunikacja.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox->addItem(icon11, QString());
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/images/potencjometr.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox->addItem(icon12, QString());
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/images/rezystor.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox->addItem(icon13, QString());
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/images/serwomechanizm.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox->addItem(icon14, QString());
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/images/tranzystor.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox->addItem(icon15, QString());
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/images/scalony.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox->addItem(icon16, QString());
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/images/mikrokontroler.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox->addItem(icon17, QString());
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/images/silnik_dc.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox->addItem(icon18, QString());
        QIcon icon19;
        icon19.addFile(QStringLiteral("images/silnik_krokowy.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox->addItem(icon19, QString());
        QIcon icon20;
        icon20.addFile(QStringLiteral(":/images/wyswietlacz.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox->addItem(icon20, QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setAutoFillBackground(false);
        comboBox->setMaxVisibleItems(15);
        comboBox->setInsertPolicy(QComboBox::InsertAlphabetically);
        comboBox->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);

        formLayout->setWidget(0, QFormLayout::FieldRole, comboBox);


        gridLayout->addLayout(formLayout, 2, 0, 1, 1);

        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label_3->setBuddy(comboBox);
#endif // QT_NO_SHORTCUT

        retranslateUi(Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Dialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:600;\">Nazwa</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("Dialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:600;\">Ilosc</span></p></body></html>", Q_NULLPTR));
        label_3->setText(QApplication::translate("Dialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:600;\">Typ</span></p></body></html>", Q_NULLPTR));
        comboBox->setItemText(0, QApplication::translate("Dialog", "akcesoria", Q_NULLPTR));
        comboBox->setItemText(1, QApplication::translate("Dialog", "stabilizator", Q_NULLPTR));
        comboBox->setItemText(2, QApplication::translate("Dialog", "modu\305\202", Q_NULLPTR));
        comboBox->setItemText(3, QApplication::translate("Dialog", "wej\305\233cie u\305\274ytkownika", Q_NULLPTR));
        comboBox->setItemText(4, QApplication::translate("Dialog", "czujnik", Q_NULLPTR));
        comboBox->setItemText(5, QApplication::translate("Dialog", "dioda IR", Q_NULLPTR));
        comboBox->setItemText(6, QApplication::translate("Dialog", "dioda LED", Q_NULLPTR));
        comboBox->setItemText(7, QApplication::translate("Dialog", "dioda Zenera", Q_NULLPTR));
        comboBox->setItemText(8, QApplication::translate("Dialog", "przycisk", Q_NULLPTR));
        comboBox->setItemText(9, QApplication::translate("Dialog", "kondensator", Q_NULLPTR));
        comboBox->setItemText(10, QApplication::translate("Dialog", "komunikacja", Q_NULLPTR));
        comboBox->setItemText(11, QApplication::translate("Dialog", "potencjometr", Q_NULLPTR));
        comboBox->setItemText(12, QApplication::translate("Dialog", "rezystor", Q_NULLPTR));
        comboBox->setItemText(13, QApplication::translate("Dialog", "serwomechanizm", Q_NULLPTR));
        comboBox->setItemText(14, QApplication::translate("Dialog", "tranzystor", Q_NULLPTR));
        comboBox->setItemText(15, QApplication::translate("Dialog", "uk\305\202ad scalony", Q_NULLPTR));
        comboBox->setItemText(16, QApplication::translate("Dialog", "mikrokontroler", Q_NULLPTR));
        comboBox->setItemText(17, QApplication::translate("Dialog", "silnik DC", Q_NULLPTR));
        comboBox->setItemText(18, QApplication::translate("Dialog", "silnik krokowy", Q_NULLPTR));
        comboBox->setItemText(19, QApplication::translate("Dialog", "wy\305\233wietlacz", Q_NULLPTR));

    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
