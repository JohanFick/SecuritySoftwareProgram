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
    QSqlTableModel *User_Info_model;
    QSqlTableModel *Device_Info_model;
    QSqlTableModel *Device_Security_model;
    QSqlTableModel *Incedent_Info_model;



private:

    QString Servername = "LOCALHOST\\MYSQL";
    QString DB_Name = "Test";

    QSqlDatabase  DB;


signals:

public slots:
};

#endif // MYDATABASE_H
