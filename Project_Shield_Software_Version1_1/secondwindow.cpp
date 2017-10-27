#include "secondwindow.h"
#include "ui_secondwindow.h"
#include <mydatabase.h>
#include <interfacehandler.h>
#include <QMessageBox>
#include <QInputDialog>

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

    ui->frame->setStyleSheet("background-image: url(:/Logo/paper.jpg)");

    ui->labelName->setAttribute(Qt::WA_TranslucentBackground);
    ui->labelSurname->setAttribute(Qt::WA_TranslucentBackground);
    ui->labelTown->setAttribute(Qt::WA_TranslucentBackground);
    ui->labelAge->setAttribute(Qt::WA_TranslucentBackground);
    ui->labelSex->setAttribute(Qt::WA_TranslucentBackground);
    ui->labelContactNumber->setAttribute(Qt::WA_TranslucentBackground);
    ui->labelAlternateNumber->setAttribute(Qt::WA_TranslucentBackground);
    ui->labelEmalAdress->setAttribute(Qt::WA_TranslucentBackground);
    ui->labelStreetAdress->setAttribute(Qt::WA_TranslucentBackground);

    ui->frame->hide();
    ui->AddCustomerFrame->hide();
  //  ui->AddCustomerFrame->setStyleSheet("background-image: url(:/Logo/paper.jpg)");


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

    MyDatabase db;

   // db.databaseUpadte();

    InterfaceHandler Handler;

    Handler.Exctract_Data_From_The_String();

    //qDebug() << endl << "Situation_Type == " <<

    QString UserSpecificInfo;

    UserSpecificInfo = Handler.Determine_Person_Specific_Information();

    QString Name,Surname,Town,Age,Sex,Contact_Number,Alternate_Number,Email_Adress,Street_adress;

    int pos;

    pos = UserSpecificInfo.indexOf(',',0);
    Name = UserSpecificInfo.left(pos);

    UserSpecificInfo.remove(0,pos+1);

    pos = UserSpecificInfo.indexOf(',',0);
    Surname = UserSpecificInfo.left(pos);

    UserSpecificInfo.remove(0,pos+1);

    pos = UserSpecificInfo.indexOf(',',0);
    Town = UserSpecificInfo.left(pos);

    UserSpecificInfo.remove(0,pos+1);

    pos = UserSpecificInfo.indexOf(',',0);
    Age = UserSpecificInfo.left(pos);

    UserSpecificInfo.remove(0,pos+1);

    pos = UserSpecificInfo.indexOf(',',0);
    Sex = UserSpecificInfo.left(pos);

    UserSpecificInfo.remove(0,pos+1);

    pos = UserSpecificInfo.indexOf(',',0);
    Contact_Number = UserSpecificInfo.left(pos);

    UserSpecificInfo.remove(0,pos+1);

    pos = UserSpecificInfo.indexOf(',',0);
    Alternate_Number = UserSpecificInfo.left(pos);

    UserSpecificInfo.remove(0,pos+1);

    pos = UserSpecificInfo.indexOf(',',0);
    Email_Adress = UserSpecificInfo.left(pos);

    UserSpecificInfo.remove(0,pos+1);

    pos = UserSpecificInfo.indexOf(',',0);
    Street_adress = UserSpecificInfo.left(pos);


    ui->labelName->setText("Name: "+Name);
    ui->labelSurname->setText("Surname: "+ Surname);
    ui->labelTown->setText("Town: "+Town);
    ui->labelAge->setText("Age: "+Age);
    ui->labelSex->setText("Sex: "+Sex);
    ui->labelContactNumber->setText("ContactNumber: "+Contact_Number);
    ui->labelAlternateNumber->setText("AlternateNumber: "+ Alternate_Number);
    ui->labelEmalAdress->setText("EmailAdress: "+Email_Adress);
    ui->labelStreetAdress->setText("StreeetAdress: "+ Street_adress);

    QString ProtocolString = " ";

    switch (Handler.Determine_The_Situation()) {
    case 1:

        ProtocolString.append("Low Risk - Send email to: "+Email_Adress+"\n");
        ProtocolString.append("Call "+Name+":"+Contact_Number+"\n"+"If person doesn't respond Call alternative :"+Alternate_Number+"\n");

        ui->labelInstructionstext->setText(ProtocolString);
        ui->labelInstructionstext->adjustSize();

        ui->frame->show();


        break;
    case 2:

        ProtocolString.append("Meduim Risk - Call "+Name+":"+Contact_Number+"\n"+"If person doesn't respond Call alternative :"+Alternate_Number+"\n");
        ProtocolString.append("If no answer Dispatch a unit to...\n" +Town+","+Street_adress+"\n");
        ProtocolString.append("Send email to: "+Email_Adress);

        ui->labelInstructionstext->setText(ProtocolString);
        ui->labelInstructionstext->adjustSize();


        ui->frame->show();


        break;

    case 3:

        ProtocolString.append("High Risk - Dispatch a unit to...\n" +Town+","+Street_adress+"\n");
        ProtocolString.append("Call "+Name+":"+Contact_Number+"\n"+"If person doesn't respond Call alternative :"+Alternate_Number+"\n");
        ProtocolString.append("Send email to: "+Email_Adress);

        ui->labelInstructionstext->setText(ProtocolString);
        ui->labelInstructionstext->adjustSize();


        ui->frame->show();

        break;
    }


}

void SecondWindow::on_ButtonDone_clicked()
{
    MyDatabase db;

    db.logEvent();
    db.UpdateDeviceInfo();
    ui->frame->hide();


}



void SecondWindow::on_AddCustomerButton_clicked()
{
    QString dialogtext;
    dialogtext = QInputDialog::getText(this,"Password","The password...",QLineEdit::Password,QString());

    if(dialogtext == "admin")
    {

        ui->AddCustomerFrame->show();
        ui->tabWidget->hide();
        ui->AddCustomerButton->hide();



    }
    else{

        QMessageBox::information(this,"Error","The password is incorrect...");

    }


}
