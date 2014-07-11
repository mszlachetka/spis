/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionO_Qt;
    QAction *action;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QListWidget *listWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QMenuBar *menuBar;
    QMenu *menuAbout_Qt;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(296, 380);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        MainWindow->setPalette(palette);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/elektronika.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        MainWindow->setDocumentMode(false);
        actionO_Qt = new QAction(MainWindow);
        actionO_Qt->setObjectName(QStringLiteral("actionO_Qt"));
        action = new QAction(MainWindow);
        action->setObjectName(QStringLiteral("action"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setEnabled(true);
        listWidget->setMaximumSize(QSize(280, 21));
        listWidget->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CrossCursor)));

        gridLayout->addWidget(listWidget, 1, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(275, 118, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setAutoRepeat(true);

        horizontalLayout_2->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setAutoRepeat(true);

        horizontalLayout_2->addWidget(pushButton_5);

        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_2->addWidget(pushButton_3);


        gridLayout->addLayout(horizontalLayout_2, 3, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 296, 21));
        menuAbout_Qt = new QMenu(menuBar);
        menuAbout_Qt->setObjectName(QStringLiteral("menuAbout_Qt"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
#ifndef QT_NO_SHORTCUT
        label->setBuddy(lineEdit);
#endif // QT_NO_SHORTCUT

        menuBar->addAction(menuAbout_Qt->menuAction());
        menuAbout_Qt->addAction(actionO_Qt);
        menuAbout_Qt->addAction(action);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionO_Qt->setText(QApplication::translate("MainWindow", "O Qt", 0));
        action->setText(QApplication::translate("MainWindow", "Skr\303\263ty klawiszowe", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Dodaj", 0));
        pushButton->setShortcut(QApplication::translate("MainWindow", "Ins", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Usun", 0));
        pushButton_2->setShortcut(QApplication::translate("MainWindow", "Del", 0));
        label->setText(QApplication::translate("MainWindow", "Wyszukaj", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "+", 0));
        pushButton_4->setShortcut(QApplication::translate("MainWindow", "+", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "-", 0));
        pushButton_5->setShortcut(QApplication::translate("MainWindow", "-", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "Zapisz/Zako\305\204cz", 0));
        pushButton_3->setShortcut(QApplication::translate("MainWindow", "Esc", 0));
        menuAbout_Qt->setTitle(QApplication::translate("MainWindow", "HELP", 0));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
