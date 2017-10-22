#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include "QDebug"
#include "stdio.h"
#include "fstream"
#include "iostream"
#include <String>
#include <QString>
#include <iostream>
#include <fstream>
#include <QInputDialog>
#include <QDirIterator>


using namespace std;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    secondwindow = new SecondWindow(this);

    QPixmap *Logo = new QPixmap(":/Logo/Logo_Small_2.png");
    QPixmap *AddUserLogo = new QPixmap(":/Logo/AddPerson.png");
    QPixmap *InfoLogo = new QPixmap(":/Logo/InfoBlueNew.png");


    ui->label->setPixmap(*Logo);
    ui->label->setAttribute(Qt::WA_TranslucentBackground);

    ui->AddUserLabel->setPixmap(*AddUserLogo);
    ui->AddUserLabel->setAttribute(Qt::WA_TranslucentBackground);

    ui->Info_Label->setPixmap(*InfoLogo);
    ui->Info_Label->setAttribute(Qt::WA_TranslucentBackground);

    ui->label->setGeometry(-10,-30,Logo->width(),Logo->height());

    ui->centralWidget->setStyleSheet("background-image: url(:/Logo/Background.jpg)");

    ui->Version_Text->setStyleSheet("color : darkBlue");
    ui->Version_Text->setAttribute(Qt::WA_TranslucentBackground);

    ui->MainText->setStyleSheet("color : darkBlue");
    ui->MainText->setAttribute(Qt::WA_TranslucentBackground);


    ui->LoginButton->setStyleSheet(" background-color: lightBlue ");
    ui->AddUser_Button->setStyleSheet("QWidget { background-color: lightBlue; }");
    ui->UserName_LineEdit->setStyleSheet(" background-color: lightBlue ");
    ui->UserPassWord_LineEdit->setStyleSheet(" background-color: lightBlue ");


    ui->frame->setAttribute(Qt::WA_TranslucentBackground);
    ui->frame->setWindowFlags(Qt::FramelessWindowHint);


    QGraphicsBlurEffect *GuassianBlur = new QGraphicsBlurEffect;
    GuassianBlur->setBlurRadius(8.0);




}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_LoginButton_clicked()
{

    QString UserName,UserPassword,UserName_TextEdit,UserPassword_TextEdit;
    string FileName = "LoginFile.txt",myLine;

    ifstream Login_TextFile(FileName);
    bool LoginFlag = false;

    UserName_TextEdit = ui->UserName_LineEdit->text();
    UserPassword_TextEdit = ui->UserPassWord_LineEdit->text();


    if (Login_TextFile.is_open())
    {
      while (getline(Login_TextFile,myLine))
      {
          int pos = myLine.find(',');

       UserName = myLine.substr(0,pos).c_str();
       UserPassword = myLine.substr(pos+1,myLine.length()).c_str();

       if(((UserName) == UserName_TextEdit) && (UserPassword == UserPassword_TextEdit))
       {
           LoginFlag = true;

       }
      }
}


  if(LoginFlag == true)
  {
      Login_TextFile.close();
      QMessageBox::information(this,"Login","Succesful login");
      hide();
      secondwindow->show();

  }
  else{

      QMessageBox msgBox;
      msgBox.setText("Incorrect ... ");
      msgBox.exec();
  }


 Login_TextFile.close();

}



void MainWindow::on_AddUser_Button_clicked()
{
    bool ok;
    bool ok_eneter;


 QString text = QInputDialog::getText(this, tr("Security Check"),
                                             tr("Please eneter the security key..."), QLineEdit::Normal,
                                             QDir::home().dirName(), &ok);
 if((text == "admin") && (ok == true))
 {
    QString UserName,UserPassword;
    string FileName = "LoginFile.txt";

    ofstream Login_TextFile;

    QString UserName_UserPassword = QInputDialog::getText(this, tr("Register New User"),
                                                tr("UserName/Password"), QLineEdit::Normal,
                                                QDir::home().dirName(), &ok_eneter);

    string UserName_UserPassword_String = UserName_UserPassword.toStdString();

     if (ok_eneter && !UserName_UserPassword_String.empty() && UserName_UserPassword_String.find_first_of('/') != 0)
     {

    UserName = UserName_UserPassword_String.substr(0,UserName_UserPassword_String.find('/')).c_str();
    UserPassword = UserName_UserPassword_String.substr(UserName_UserPassword_String.find('/')+1,UserName_UserPassword_String.length()).c_str();

    }



    Login_TextFile.open(FileName,std::ofstream::app);

    if(Login_TextFile.is_open() == true)
    {
        Login_TextFile << QString(UserName).toStdString() << "," << QString(UserPassword).toStdString()<< endl ;

        Login_TextFile.close();

        qDebug() << " File opened...";

    }

}

else if(ok == true)
{

QMessageBox msgBox;
msgBox.setText("Incorrect ... ");
msgBox.exec();
}
}
