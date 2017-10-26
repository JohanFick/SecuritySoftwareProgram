#ifndef INTERFACEHANDLER_H
#define INTERFACEHANDLER_H
#include <Qstring>


class InterfaceHandler
{
public:
    InterfaceHandler();
   void Exctract_Data_From_The_String();
   int  Determine_The_Situation();
   void Determine_Person_Specific_Information();


private:

    QString User_ID,Device_ID,Connection_Status,Device_Status,Distress_Status,Alarm_status,Date,Time,Sensor_Type;
    QString String_From_The_PI; // refer to the documentation for the string configuration


};

#endif // INTERFACEHANDLER_H
