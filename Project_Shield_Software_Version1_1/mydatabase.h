#ifndef MYDATABASE_H
#define MYDATABASE_H

#include <QMainWindow>
#include <QtSql>
#include <QDebug>
#include <QString>
#include <QSqlQuery>
#include <interfacehandler.h>

class MyDatabase : public QMainWindow
{
    Q_OBJECT
public:
    explicit MyDatabase(QWidget *parent = 0);
    void connectDatabase();
    void databaseUpadte();
    QString determine_User_Information (QString UserID);
    void ExtractDataFromString();
    void logEvent();
    void UpdateDeviceInfo();





    QSqlTableModel *User_Info_model;
    QSqlTableModel *Device_Info_model;
    QSqlTableModel *Device_Security_model;
    QSqlTableModel *Incedent_Info_model;

    QString Name,Surname,Town,Age,Sex,Contact_Number,Alternate_Number,Email_Adress,Street_adress;
    QString User_ID,Device_ID,Connection_Status,Device_Status,Distress_Status,Alarm_status,Date,Time,Sensor_Type;
    QString String_From_The_PI;


private:

    QString Servername = "LOCALHOST\\MYSQL";
    QString DB_Name = "Test";

    QSqlDatabase  DB;


signals:

public slots:
};

#endif // MYDATABASE_H
