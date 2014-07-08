#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidget>
#include "dialog.h"
#include "eitem.h"
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
    int nrporzadkowy=1;
    QVector <eitem*> Eitm_vect;
private slots:
    void on_pushButton_clicked();

 public slots:
    void onNewTextEntered(const QString &text,const double &ammount);
private:
    Ui::MainWindow *ui;
    Dialog *mDialog;
signals:

};

#endif // MAINWINDOW_H
