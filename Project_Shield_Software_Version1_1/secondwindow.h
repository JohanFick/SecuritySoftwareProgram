#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include <QDialog>

namespace Ui {
class SecondWindow;
}

class SecondWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SecondWindow(QWidget *parent = 0);
    ~SecondWindow();

private slots:
    void on_pushButton_clicked();



    void on_ButtonDone_clicked();

    void on_AddCustomerButton_clicked();

    void on_buttonDone_clicked();

    void clearthelineedits();

    void on_buttonCancel_clicked();

    void on_pushButton_3_clicked();

    void on_buttonCancelDelete_clicked();

    void on_buttonOkDelete_clicked();


    void on_pushButton_2_clicked();

public slots:






private:
    Ui::SecondWindow *ui;
    QString Email;
};

#endif // SECONDWINDOW_H
