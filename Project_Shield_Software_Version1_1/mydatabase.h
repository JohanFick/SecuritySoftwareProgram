#ifndef MYDATABASE_H
#define MYDATABASE_H

#include <QMainWindow>
#include <QtSql>
#include <QDebug>
#include <QString>
#include <QSqlQuery>

class MyDatabase : public QMainWindow
{
    Q_OBJECT
public:
    explicit MyDatabase(QWidget *parent = 0);
    void connectDatabase();
    void databaseUpadte();
    QString determine_User_Information (QString UserID);
    void logEvent();




    QSqlTableModel *User_Info_model;
    QSqlTableModel *Device_Info_model;
    QSqlTableModel *Device_Security_model;
    QSqlTableModel *Incedent_Info_model;

    QString Name,Surname,Town,Age,Sex,Contact_Number,Alternate_Number,Email_Adress,Street_adress;



private:

    QString Servername = "LOCALHOST\\MYSQL";
    QString DB_Name = "Test";

    QSqlDatabase  DB;


signals:

public slots:
};

#endif // MYDATABASE_H
