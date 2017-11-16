#include "mydatabase.h"
#include <QMessageBox>
#include <interfacehandler.h>
#include <secondwindow.h>



MyDatabase::MyDatabase(QWidget *parent) : QMainWindow(parent)
{

  String_From_The_PI = "9,1,0,0,1,1,2017-10-26,08:06:00,0";
  ExtractDataFromString();

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

QString MyDatabase::determine_User_Information(QString UserID)
{

            QSqlQuery query(DB);


             QVariant Variant_ID = UserID.toInt(nullptr,10);

             QString qsqlString = "SELECT Name,Surname,HomeTown,Age,Sex,ContcatNumber,AlternateNumber,EmailAdress,StreetAdress FROM userinfo WHERE UserID =";

             qsqlString.append(UserID);
             query.exec(qsqlString);
             query.exec();
             query.first();


            Name = query.value(0).toString();
            Surname = query.value(1).toString();
            Town = query.value(2).toString();
            Age = query.value(3).toString();
            Sex = query.value(4).toString();
            Contact_Number = query.value(5).toString();
            Alternate_Number = query.value(6).toString();
            Email_Adress = query.value(7).toString();
            Street_adress = query.value(8).toString();



            QString string;

            string.append(Name);
            string.append(",");
            string.append(Surname);
            string.append(",");
            string.append(Town);
            string.append(",");
            string.append(Age);
            string.append(",");
            string.append(Sex);
            string.append(",");
            string.append(Contact_Number);
            string.append(",");
            string.append(Alternate_Number);
            string.append(",");
            string.append(Email_Adress);
            string.append(",");
            string.append(Street_adress);


        return string;

}

void MyDatabase::logEvent()
{

    QSqlQuery *query = new QSqlQuery(DB);

    InterfaceHandler handler;
    QString qsqlValues;

    qsqlValues.append("INSERT into incedentlog(IncidentNumber,DeviceID,SensorType,IncedentDate,IncedentTime) VALUES ");
    qsqlValues.append("(0,"+Device_ID+","+Sensor_Type+",'"+Date+"','"+Time+"')");

    query->exec(qsqlValues);//"INSERT into incedentlog(IncidentNumber,DeviceID,SensorType,IncedentDate,IncedentTime) VALUES (0,1,2,'2017-10-26','10:00')");

}

void MyDatabase::UpdateDeviceInfo()
{

    if(Alarm_status == "1")
    {
        QSqlQuery *query = new QSqlQuery(DB);

        QString qsqlString = "SELECT (amounttriggerd) FROM deviceinfo WHERE DeviceID =";
        qsqlString.append(Device_ID);


        query->exec(qsqlString);
        query->first();
    int AmountTriggerd = query->value(0).toString().toInt(nullptr,10);

        AmountTriggerd++;

        QString qsqlValues;
        QString String_Amounttriggerd;

        String_Amounttriggerd = QString::number(AmountTriggerd);

        qDebug() << String_Amounttriggerd;

        qsqlValues.append("UPDATE deviceinfo SET AmountTriggerd ="+ String_Amounttriggerd);
        qsqlValues.append( " WHERE DeviceID =");
        qsqlValues.append(Device_ID);


         query->exec(qsqlValues);
         qDebug() << query->lastError().text();

    }


    if(Connection_Status == "1")
    {
        QSqlQuery *query = new QSqlQuery(DB);
        QString qsqlString;

        qsqlString.append("UPDATE deviceinfo SET ConnectionStatus = 'Connected'");
        qsqlString.append( " WHERE DeviceID =");
        qsqlString.append(Device_ID);

        query->exec(qsqlString);
        qDebug() << query->lastError().text();


    }
    else
    {
        QSqlQuery *query = new QSqlQuery(DB);
        QString  qsqlString;


        qsqlString.append("UPDATE deviceinfo SET ConnectionStatus = 'Not-C'");
        qsqlString.append( " WHERE DeviceID =");
        qsqlString.append(Device_ID);

        query->exec(qsqlString);


    }

    if(Device_Status=="1")
    {
        QSqlQuery *query = new QSqlQuery(DB);
        QString qsqlString;

        qsqlString.append("UPDATE deviceinfo SET DeviceStatus = 'Armed'");
        qsqlString.append( " WHERE DeviceID =");
        qsqlString.append(Device_ID);

        query->exec(qsqlString);
        qDebug() << query->lastError().text();

    }
    else
    {
      QSqlQuery *query = new QSqlQuery(DB);
      QString qsqlString;

      qsqlString.append("UPDATE deviceinfo SET DeviceStatus = 'Not-Armed'");
      qsqlString.append( " WHERE DeviceID =");
      qsqlString.append(Device_ID);

      query->exec(qsqlString);
      qDebug() << query->lastError().text();

    }
}

void MyDatabase::addUserToDatabase(QString addUserInfo,QString addDeviceInfo)
{
    QString addUserId,addName,addSurname,addTown,addAge,addSex,addContact_Number,addAlternate_Number,addEmail_Adress,addStreet_adress;
    QString addDeviceId,addConnectionStatus,addDeviceStatus,addAmountTriggerd,addDateInstalled,addModelNumber;
    QString sqlqueryStringUserInfo,sqlqueryStringDeviceInfo;
    int pos;

    QSqlQuery *query = new QSqlQuery(DB);
    sqlqueryStringUserInfo = "INSERT into userinfo(UserId,Name,surname,hometown,age,sex,contcatnumber,alternatenumber,emailadress,StreetAdress) VALUES ";
    sqlqueryStringDeviceInfo ="INSERT into deviceinfo(DeviceID,UserID,ConnectionStatus,DeviceStatus,AmountTriggerd,DateInstalled,ModelNumber) VALUES ";

    //Determine the User info from the string

    pos = addUserInfo.indexOf(',',0);
    addUserId = addUserInfo.left(pos);

    addUserInfo.remove(0,pos+1);

    pos = addUserInfo.indexOf(',',0);
    addName = addUserInfo.left(pos);

    addUserInfo.remove(0,pos+1);

    pos = addUserInfo.indexOf(',',0);
    addSurname = addUserInfo.left(pos);

    addUserInfo.remove(0,pos+1);

    pos = addUserInfo.indexOf(',',0);
    addTown = addUserInfo.left(pos);

    addUserInfo.remove(0,pos+1);

    pos = addUserInfo.indexOf(',',0);
    addAge = addUserInfo.left(pos);

    addUserInfo.remove(0,pos+1);

    pos = addUserInfo.indexOf(',',0);
    addSex = addUserInfo.left(pos);

    addUserInfo.remove(0,pos+1);

    pos = addUserInfo.indexOf(',',0);
    addContact_Number = addUserInfo.left(pos);

    addUserInfo.remove(0,pos+1);

    pos = addUserInfo.indexOf(',',0);
    addAlternate_Number= addUserInfo.left(pos);

    addUserInfo.remove(0,pos+1);

    pos = addUserInfo.indexOf(',',0);
    addEmail_Adress = addUserInfo.left(pos);

    addUserInfo.remove(0,pos+1);

    pos = addUserInfo.indexOf(',',0);
    addStreet_adress = addUserInfo.left(pos);

    addUserInfo.remove(0,pos+1);

    // Determine the Device information from the string

    pos = addDeviceInfo.indexOf(',',0);
    addDeviceId= addDeviceInfo.left(pos);

    addDeviceInfo.remove(0,pos+1);

    pos = addDeviceInfo.indexOf(',',0);
    addDateInstalled =addDeviceInfo.left(pos);

    addDeviceInfo.remove(0,pos+1);

    pos = addDeviceInfo.indexOf(',',0);
    addModelNumber =addDeviceInfo.left(pos);

    addDeviceInfo.remove(0,pos+1);

    addConnectionStatus = "Establish";
    addDeviceStatus = "Establish";
    addAmountTriggerd = "0";

    //"INSERT into userinfo(UserId, name, surname,hometown,age,sex,contcatnumber,alternatenumber,emailadress) VALUES (7,'Bart','Simpson','Springfield',10,'m','05616516','051561','Test@gmail.com')");

    sqlqueryStringUserInfo.append("(0,'"+addName+"','"+addSurname+"','"+addTown+"',"+addAge+",'"+addSex+"','"+addContact_Number+"','"
                                  +addAlternate_Number+"','"+addEmail_Adress+"','"+addStreet_adress+"')");

    qDebug() << sqlqueryStringUserInfo;

     query->exec(sqlqueryStringUserInfo);

     qDebug() << query->lastError().text() ;


     query->exec("SELECT * FROM userinfo ORDER BY UserID DESC LIMIT 1");

     qDebug() << query->lastError().text() ;


     query->first();

     addUserId = query->value(0).toString();

    sqlqueryStringDeviceInfo.append("("+addDeviceId+","+addUserId+",'"+addConnectionStatus+"','"+addDeviceStatus+"','"+addAmountTriggerd+"','"+addDateInstalled+"','"+addModelNumber+"')");

    qDebug() << sqlqueryStringDeviceInfo;

    query->exec(sqlqueryStringDeviceInfo);

     qDebug() << query->lastError().text();


}

void MyDatabase::deleteUser(QString string)
{
    QSqlQuery *query = new QSqlQuery(DB);

    QString qsqlstring,qsqlstringDevice;

    qsqlstring.append("DELETE FROM userinfo WHERE UserID = "+string+" LIMIT 1");
    query->exec(qsqlstring);
    qsqlstringDevice.append("DELETE FROM deviceinfo WHERE UserID = "+string+" LIMIT 1");
    query->exec(qsqlstringDevice);

    qDebug() << query->lastError().text();

}

void MyDatabase::sendEmail(QString Email)
{
    QString emailName,emailPassword,serverName,serverPort,emailRecipant;


    emailName = "johanfick9@gmail.com";
    emailPassword = "weskus0842280619";
    serverName = "smtp.gmail.com";
    serverPort = "465";
    emailRecipant = Email;

 qDebug() << " The emial is..." << Email;

    if((Alarm_status.toInt(nullptr,10) == 1))
    {
        determinemsglow();
    }

    if((Distress_Status.toInt(nullptr,10) == 1) && (Alarm_status.toInt(nullptr,10) == 0))
    {
        determinemsgMed();
    }

    if((Distress_Status.toInt(nullptr,10) == 1) && (Alarm_status.toInt(nullptr,10) == 1) )
    {
       determinemsgHigh();
    }


    Smtp* smtp = new Smtp(emailName, emailPassword ,serverName, serverPort.toInt(nullptr,10));
    connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));

    smtp->sendMail(emailName, emailRecipant,emailSubject,emailMessage);

}

void MyDatabase::determinemsglow()
{
    emailSubject = "EMEREGENCY-Low Threat";
    emailMessage = "Possible break in detected... Please respond to email or call 0752564895";
}

void MyDatabase::determinemsgMed()
{
    emailSubject ="EMEREGENCY-Medium Threat";
    emailMessage = "Possible break in detected... Please respond to email or call 0752564895";

}

void MyDatabase::determinemsgHigh()
{
    emailSubject = "EMEREGENCY-High Threat";
    emailMessage = "Possible break in detected... Please respond to email or call 0752564895";

}

void MyDatabase::mailSent(QString status)
{

    if(status == "Message sent")
        QMessageBox::warning( 0, tr( "Qt Simple SMTP client" ), tr( "Message sent!\n\n" ) );

}

void MyDatabase::ExtractDataFromString()
{
    int pos = 0;

    pos = String_From_The_PI.indexOf(',',0);
    User_ID = String_From_The_PI.left(pos);

    String_From_The_PI.remove(0,pos+1);

    pos = String_From_The_PI.indexOf(',',0);
    Device_ID = String_From_The_PI.left(pos);

    String_From_The_PI.remove(0,pos+1);

    pos = String_From_The_PI.indexOf(',',0);
    Connection_Status = String_From_The_PI.left(pos);

    String_From_The_PI.remove(0,pos+1);
    pos = String_From_The_PI.indexOf(',',0);
    Device_Status = String_From_The_PI.left(pos);

    String_From_The_PI.remove(0,pos+1);

    pos = String_From_The_PI.indexOf(',',0);
    Distress_Status = String_From_The_PI.left(pos);

    String_From_The_PI.remove(0,pos+1);

    pos = String_From_The_PI.indexOf(',',0);
    Alarm_status = String_From_The_PI.left(pos);

    String_From_The_PI.remove(0,pos+1);

    pos = String_From_The_PI.indexOf(',',0);
    Date = String_From_The_PI.left(pos);

    String_From_The_PI.remove(0,pos+1);

    pos = String_From_The_PI.indexOf(',',0);
    Time = String_From_The_PI.left(pos);

    String_From_The_PI.remove(0,pos+1);

    pos = String_From_The_PI.indexOf(',',0);
    Sensor_Type = String_From_The_PI.left(pos);

    String_From_The_PI.remove(0,pos+1);

}

