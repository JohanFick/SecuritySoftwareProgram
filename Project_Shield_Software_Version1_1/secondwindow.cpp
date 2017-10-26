#include "secondwindow.h"
#include "ui_secondwindow.h"
#include <mydatabase.h>
#include <interfacehandler.h>

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

//    ui->tableView->setStyleSheet(QString::fromUtf8("QScrollBar:vertical {"
//                                                   "    border: 1px solid #999999;"
//                                                   "    background:white;"
//                                                   "    width:10px;    "
//                                                   "    margin: 0px 0px 0px 0px;"
//                                                   "}"
//                                                   "QScrollBar::handle:vertical {"
//                                                   "    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,"
//                                                   "    stop: 0 rgb(32, 47, 130), stop: 0.5 rgb(32, 47, 130), stop:1 rgb(32, 47, 130));"
//                                                   "    min-height: 0px;"
//                                                   "}"
//                                                   "QScrollBar::add-line:vertical {"
//                                                   "    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,"
//                                                   "    stop: 0 rgb(32, 47, 130), stop: 0.5 rgb(32, 47, 130),  stop:1 rgb(32, 47, 130));"
//                                                   "    height: 0px;"
//                                                   "    subcontrol-position: bottom;"
//                                                   "    subcontrol-origin: margin;"
//                                                   "}"
//                                                   "QScrollBar::sub-line:vertical {"
//                                                   "    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,"
//                                                   "    stop: 0  rgb(32, 47, 130), stop: 0.5 rgb(32, 47, 130),  stop:1 rgb(32, 47, 130));"
//                                                   "    height: 0 px;"
//                                                   "    subcontrol-position: top;"
//                                                   "    subcontrol-origin: margin;"
//                                                   "}"
//                                                   ));



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

     ui->tableView->resizeColumnsToContents();
     ui->Device_view->resizeColumnsToContents();
     ui->Device_security->resizeColumnsToContents();
     ui->Incedent_View->resizeColumnsToContents();

     ui->tableView->resizeRowsToContents();
     ui->Device_view->resizeRowsToContents();
     ui->Device_security->resizeRowsToContents();
     ui->Incedent_View->resizeRowsToContents();


}

void SecondWindow::on_pushButton_2_clicked()
{

    //MyDatabase db;

   // db.databaseUpadte();

    InterfaceHandler Handler;

    Handler.Exctract_Data_From_The_String();

    qDebug() << endl << "Situation_Type == " << Handler.Determine_The_Situation();

    Handler.Determine_Person_Specific_Information();

}
