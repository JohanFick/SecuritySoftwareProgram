#ifndef INTERFACEHANDLER_H
#define INTERFACEHANDLER_H
#include <Qstring>
#include <MY_thread.h>


class InterfaceHandler
{
public:
    InterfaceHandler();
   void Exctract_Data_From_The_String();
   int  Determine_The_Situation();
   QString Determine_Person_Specific_Information();
   void Extract_Data_From_User_String();
   void setstring();


   QString UserSpecificInfo;
   QString User_ID,Device_ID,Connection_Status,Device_Status,Distress_Status,Alarm_status,Date,Time,Sensor_Type;


private:


    MY_Thread *thread;
    QString String_From_The_PI; // refer to the documentation for the string configuration


};

#endif // INTERFACEHANDLER_H
