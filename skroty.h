#ifndef SKROTY_H
#define SKROTY_H

#include <QDialog>

namespace Ui {
class skroty;
}

class skroty : public QDialog
{
    Q_OBJECT

public:
    explicit skroty(QWidget *parent = 0);
    ~skroty();

private slots:
    void on_pushButton_clicked();

private:
    Ui::skroty *ui;
};

#endif // SKROTY_H
