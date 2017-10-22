#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QPixmap"
#include "qstring.h"
#include "QMessageBox"
#include "QGraphicsEffect"
#include <iostream>
#include <string>
#include <secondwindow.h>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_LoginButton_clicked();



    void on_AddUser_Button_clicked();

private:
    Ui::MainWindow *ui;
    SecondWindow *secondwindow;
};

#endif // MAINWINDOW_H
