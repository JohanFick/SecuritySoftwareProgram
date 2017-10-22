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
