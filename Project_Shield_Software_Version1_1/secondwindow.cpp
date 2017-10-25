#include "secondwindow.h"
#include "ui_secondwindow.h"
#include <mydatabase.h>

SecondWindow::SecondWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecondWindow)
{
    ui->setupUi(this);

    this->showMaximized();
    this->hide();
    QPixmap *Logo = new QPixmap(":/Logo/Logo_Small_2.png");


    ui->label->setPixmap(*Logo);
    ui->label->setAttribute(Qt::WA_TranslucentBackground);

    ui->Version_Text->setStyleSheet("color : darkBlue");
    ui->Version_Text->setAttribute(Qt::WA_TranslucentBackground);

    ui->MainText->setStyleSheet("color : darkBlue");
    ui->MainText->setAttribute(Qt::WA_TranslucentBackground);

    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->Device_view->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->Device_security->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->Incedent_View->setEditTriggers(QAbstractItemView::NoEditTriggers);

   setStyleSheet("background-image: url(:/Logo/earth.jpg)");


}

SecondWindow::~SecondWindow()
{
    delete ui;
}

void SecondWindow::on_pushButton_clicked()
{

     MyDatabase db ;

     db.connectDatabase();

     ui->tableView->setModel(db.User_Info_model);
     ui->Device_view->setModel(db.Device_Info_model);
     ui->Device_security->setModel(db.Device_Security_model);
     ui->Incedent_View->setModel(db.Incedent_Info_model);




}

void SecondWindow::on_pushButton_2_clicked()
{

    MyDatabase db;

    db.databaseUpadte();

}
