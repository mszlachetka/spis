#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>


namespace Ui {
class Dialog;
}

class Dialog :public QDialog {
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();


private slots:



    void on_buttonBox_accepted();


signals:
    void newTextEntered(const QString &text, const double &ammount, const QString &typ,const QIcon &mIcon);


private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
