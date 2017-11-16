#include "interfacehandler.h"
#include <stdio.h>
#include <QDebug>
#include <mydatabase.h>
#include <QMessageBox>
#include <QTime>

using namespace std;


InterfaceHandler::InterfaceHandler()
{
    String_From_The_PI = "9,1,0,0,1,1,2017-10-26,08:06:00,0";

}

void InterfaceHandler::Exctract_Data_From_The_String()
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

    qDebug() << endl << "Name = " << User_ID;
    qDebug() << endl << "Device_ID = " << Device_ID;
    qDebug() << endl << "Connection_Status = " << Connection_Status;
    qDebug() << endl << "Device_Status = " << Device_Status;
    qDebug() << endl << "Distress_Status = " << Distress_Status;
    qDebug() << endl << "Alarm_Status = " << Alarm_status;
    qDebug() << endl << "Date = " << Date;
    qDebug() << endl << "Time = " << Time;
    qDebug() << endl << "Sensor_Type = " << Sensor_Type;
    qDebug() << endl << "String = " << String_From_The_PI;


}

int InterfaceHandler::Determine_The_Situation()
{
    int Protocol_Type = 0;

    QTime time;
    MyDatabase db;



    if((Alarm_status.toInt(nullptr,10) == 1))
    {
        Protocol_Type = 1;
    }

    if((Distress_Status.toInt(nullptr,10) == 1) && (Alarm_status.toInt(nullptr,10) == 0))
    {
        Protocol_Type = 2;
    }

    if((Distress_Status.toInt(nullptr,10) == 1) && (Alarm_status.toInt(nullptr,10) == 1) )
    {

       Protocol_Type = 3;
    }


    return Protocol_Type;

}

QString InterfaceHandler::Determine_Person_Specific_Information()
{
    MyDatabase db;

   UserSpecificInfo = db.determine_User_Information(User_ID);

   qDebug() << " The current strinf is: " << UserSpecificInfo;

   return UserSpecificInfo;

}

void InterfaceHandler::Extract_Data_From_User_String()
{



}



