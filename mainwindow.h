#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidget>
#include "dialog.h"
#include "eitem.h"
#include "skroty.h"
#include <QVector>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    QVector <eitem*> Eitm_vect;
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_listWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous);

    void on_pushButton_3_clicked();

    void addItem(int lastone);

    int getnumber();

    void on_actionO_Qt_triggered();

    void on_lineEdit_textChanged(const QString);

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();



    void on_lineEdit_returnPressed();

    void on_action_triggered();

public slots:
    void onNewTextEntered(const QString &text,const double &ammount, const QString &typ,const QIcon &mIcon);
private:
    Ui::MainWindow *ui;
    Dialog *mDialog;
    skroty *mSkroty;
    int nrglobal;
signals:

};

#endif // MAINWINDOW_H
