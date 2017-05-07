/********************************************************************************
** Form generated from reading UI file 'skroty.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SKROTY_H
#define UI_SKROTY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_skroty
{
public:
    QGridLayout *gridLayout;
    QTextBrowser *textBrowser;
    QPushButton *pushButton;

    void setupUi(QDialog *skroty)
    {
        if (skroty->objectName().isEmpty())
            skroty->setObjectName(QStringLiteral("skroty"));
        skroty->resize(170, 210);
        gridLayout = new QGridLayout(skroty);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textBrowser = new QTextBrowser(skroty);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        gridLayout->addWidget(textBrowser, 0, 0, 1, 1);

        pushButton = new QPushButton(skroty);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);


        retranslateUi(skroty);

        QMetaObject::connectSlotsByName(skroty);
    } // setupUi

    void retranslateUi(QDialog *skroty)
    {
        skroty->setWindowTitle(QApplication::translate("skroty", "Dialog", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("skroty", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">Skr\303\263ty klawiszowe:</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">+</span><span style=\" font-size:10pt;\"> </span><span style=\" font-size:10pt; font-style:italic;\">zwi\304\231ksz ilo\305\233\304\207</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-inde"
                        "nt:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">-</span><span style=\" font-size:10pt; font-weight:600; font-style:italic;\"> </span><span style=\" font-size:10pt; font-style:italic;\">zmniejsz ilo\305\233\304\207</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">INS </span><span style=\" font-size:10pt; font-style:italic;\">dodaj element</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">DEL </span><span style=\" font-size:10pt; font-style:italic;\">usun element</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">ESC </span><span style"
                        "=\" font-size:10pt; font-style:italic;\">zapisz/zako\305\204cz</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">HOME </span><span style=\" font-size:10pt; font-style:italic;\">poczat\304\231k listy</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">END </span><span style=\" font-size:10pt; font-style:italic;\">koniec listy</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("skroty", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class skroty: public Ui_skroty {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SKROTY_H
