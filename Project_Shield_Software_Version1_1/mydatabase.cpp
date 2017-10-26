#include "mydatabase.h"


MyDatabase::MyDatabase(QWidget *parent) : QMainWindow(parent)
{




}

void MyDatabase::connectDatabase()
{

    DB = QSqlDatabase::addDatabase("QMYSQL");
    DB.setHostName("localhost");
    DB.setDatabaseName("projectshielddb");
    DB.setPort(3306);
    DB.setUserName("root");
    DB.setPassword("root");


    if(DB.open())
    {
        qDebug() << "Opened!";


        User_Info_model = new QSqlTableModel(nullptr,DB);
        User_Info_model->setTable("userinfo");

        Device_Info_model = new QSqlTableModel(nullptr,DB);
        Device_Info_model->setTable("deviceinfo");

        Device_Security_model = new QSqlTableModel(nullptr,DB);
        Device_Security_model->setTable("security");

        Incedent_Info_model = new QSqlTableModel(nullptr,DB);
        Incedent_Info_model->setTable("incedentlog");

        Device_Info_model->select();
        Device_Security_model->select();
        Incedent_Info_model->select();



        if(User_Info_model->select())
        {

            qDebug() << "Database populated";
        }


        qDebug() << "Closing database..." << DB.lastError().text();

    }
   else
    {

        qDebug() << "Error = " << DB.lastError().text();
    }

    //DB.close();

}

void MyDatabase::databaseUpadte()
{

  QSqlQuery *query = new QSqlQuery(DB);

  query->exec("INSERT into userinfo(UserId, name, surname,hometown,age,sex,contcatnumber,alternatenumber,emailadress) VALUES (7,'Bart','Simpson','Springfield',10,'m','05616516','051561','Test@gmail.com')");

  qDebug() << query->lastError().text() ;


}

void MyDatabase::determine_User_Information(QString UserID)
{

     QSqlQuery *query = new QSqlQuery(DB);


            query->prepare("SELECT Name,Surname,HomeTown,Age,Sex,ContcatNumber,AlternateNumber,EmailAdress,StreetAdress FROM userinfo WHERE UserID = :UserID");
            query->bindValue(":UserID",UserID,QSql::Out);



            query->exec();
            qDebug() << "Last query error : " << query->lastError();
            qDebug() << "Details from UserID fine";
            query->first();



            Name = query->value(0).toString();
            Surname = query->value(1).toString();
            Town = query->value(2).toString();
            Age = query->value(3).toString();
            Sex = query->value(4).toString();
            Contact_Number = query->value(5).toString();
            Alternate_Number = query->value(6).toString();
            Email_Adress = query->value(7).toString();
            Street_adress = query->value(8).toString();

            qDebug() << endl<< Name;
            qDebug() << endl<< Surname;
            qDebug() << endl<< Town;
            qDebug() << endl<< Age;
            qDebug() << endl<< Sex;
            qDebug() << endl<< Contact_Number;
            qDebug() << endl<< Alternate_Number;
            qDebug() << endl<< Email_Adress;
            qDebug() << endl<< Street_adress;

          //  }
          //  else
           // {
                qDebug() << endl <<" There is no valid user with the DeviceID";
          //  }


}
