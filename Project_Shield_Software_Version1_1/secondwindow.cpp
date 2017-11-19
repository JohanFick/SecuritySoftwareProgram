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
    ui->deleteFrame->hide();
    ui->pushButton->hide();
    //   ui->pushButton_2->hide();
    on_pushButton_clicked();




}

SecondWindow::~SecondWindow()
{
    delete ui;
}

void SecondWindow::on_pushButton_clicked() // Done
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

     //db.UpdateDeviceInfo();

}

void SecondWindow::on_pushButton_2_clicked()
{

    MyDatabase db;

    db.setstring();

   // db.databaseUpadte();

    InterfaceHandler Handler;

    Handler.Exctract_Data_From_The_String();

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
    Email = Email_Adress;

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

        db.determinemsglow();
        ProtocolString.append("Low Risk - Send email to: "+Email_Adress+"\n");
        ProtocolString.append("Call "+Name+":"+Contact_Number+"\n"+"If person doesn't respond Call alternative :"+Alternate_Number+"\n");


        ui->labelInstructionstext->setText(ProtocolString);
        ui->labelInstructionstext->adjustSize();

        ui->frame->show();


        break;
    case 2:


        db.determinemsgMed();
        ProtocolString.append("Meduim Risk - Call "+Name+":"+Contact_Number+"\n"+"If person doesn't respond Call alternative :"+Alternate_Number+"\n");
        ProtocolString.append("If no answer Dispatch a unit to...\n" +Town+","+Street_adress+"\n");
        ProtocolString.append("Send email to: "+Email_Adress);

        ui->labelInstructionstext->setText(ProtocolString);
        ui->labelInstructionstext->adjustSize();


        ui->frame->show();


        break;

    case 3:

        db.determinemsgHigh();
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

    db.setstring();

    db.logEvent();
    db.UpdateDeviceInfo();

   qDebug() << " Sending the email.....................";

    if(ui->EmailCheckbox->checkState())
    {
        db.sendEmail(Email);
    }


    ui->frame->hide();

    on_pushButton_clicked();


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

void SecondWindow::on_buttonDone_clicked()
{
    if((!ui->textEditAge->text().isEmpty()) && (!ui->textEditAlterNumber->text().isEmpty()) &&
            (!ui->textEditContactNumber->text().isEmpty()) && (!ui->textEditDateInstalled->text().isEmpty()) &&
            (!ui->textEditEmailAddress->text().isEmpty()) && (!ui->textEditModelNumber->text().isEmpty()) &&
            (!ui->textEditName->text().isEmpty()) && (!ui->textEditSex->text().isEmpty()) && (!ui->textEditStreetAddress->text().isEmpty())
            && (!ui->textEditSurname->text().isEmpty()) && (!ui->textEditTown->text().isEmpty()))
    {

        ui->AddCustomerFrame->hide();
        ui->tabWidget->show();
        ui->AddCustomerButton->show();

        QString addUserInfo;
        QString addDeviceInfo;

        addUserInfo.append("Null,"+ui->textEditName->text()+","+ui->textEditSurname->text()+","+ui->textEditTown->text()+","
                          +ui->textEditAge->text()+","+ui->textEditSex->text()+","+ui->textEditContactNumber->text()+","+ui->textEditAlterNumber->text()+","+ui->textEditEmailAddress->text()+","+ui->textEditStreetAddress->text());

        addDeviceInfo.append("Null,"+ui->textEditDateInstalled->text()+","+ui->textEditModelNumber->text());

        MyDatabase db;

        db.addUserToDatabase(addUserInfo,addDeviceInfo);

        clearthelineedits();

    }
    else{

        QMessageBox::information(this,"Error","Please fill in all the needed information...");

    }
}

void SecondWindow::clearthelineedits()
{
    ui->textEditAge->clear();
    ui->textEditAlterNumber->clear();
    ui->textEditContactNumber->clear();
    ui->textEditDateInstalled->clear();
    ui->textEditEmailAddress->clear();
    ui->textEditModelNumber->clear();
    ui->textEditName->clear();
    ui->textEditSex->clear();
    ui->textEditStreetAddress->clear();
    ui->textEditSurname->clear();
    ui->textEditTown->clear();

}

void SecondWindow::on_buttonCancel_clicked()
{
    ui->AddCustomerFrame->hide();
    ui->tabWidget->show();
    ui->AddCustomerButton->show();
    clearthelineedits();
}

void SecondWindow::on_pushButton_3_clicked()
{
    MyDatabase db;

    //db.deleteUser();

    ui->deleteFrame->show();


}

void SecondWindow::on_buttonCancelDelete_clicked()
{
    QMessageBox::information(this,"Canceling","Delete Canceld...");
    ui->deleteFrame->hide();
    ui->textEditDeleteUserID->clear();

}

void SecondWindow::on_buttonOkDelete_clicked()
{


    if(ui->textEditDeleteUserID->text().isEmpty())
    {
      QMessageBox::information(this,"Error","Please fill-in the userID...");

    }
    else if(!ui->textEditDeleteUserID->text().toInt(nullptr,10))
    {

      QMessageBox::information(this,"Error","Please fill-in an integer...");
    }
    else
    {
        QString UserIDStringValue;
        MyDatabase db;
        db.setstring();

        UserIDStringValue.append(ui->textEditDeleteUserID->text());
        db.deleteUser(UserIDStringValue);

        ui->deleteFrame->hide();
        ui->textEditDeleteUserID->clear();



    }



}
