#include "MY_thread.h"
#include <fstream>
#include <stdio.h>
#include "iostream"


using namespace std;



MY_Thread::MY_Thread(int ID, QObject *parent) : QThread(parent)
{
    this->socketdescriptor = ID;
    cry = new Crypt();


}

void MY_Thread::run()
{
    qDebug() <<"starting thread";
    soc = new QTcpSocket();
    if(!soc->setSocketDescriptor(this->socketdescriptor))
    {

        emit error(soc->error());
        return;

    }

    //connecting signals and slots
    connect(soc,SIGNAL(readyRead()),this,SLOT(readyRead()),Qt::DirectConnection);
    connect(soc,SIGNAL(disconnected()),this,SLOT(disconnect()),Qt::DirectConnection);

    qDebug()<<"Client CONNECTED";
    //creates message loop, keep thread runningindeffinitly until I  tel it to close
    exec();


}

void MY_Thread::readyRead()
{
    QByteArray DATA = soc->readAll();
    std::string dat =  DATA.toStdString();
     dat = cry->encryptDecrypt(dat);
     //QByteArray data_fin;
     data_fin = data_fin.fromStdString(dat);


    qDebug()<<"DATA RECEIVED from: "<<socketdescriptor<<data_fin;
    safevariable();

     dat = cry->encryptDecrypt(dat);
     data_fin = data_fin.fromStdString(dat);

     soc->write(data_fin);

    // Button();


}

void MY_Thread::disconnect()
{
    qDebug()<<"socket disconnect, thread exit";
    //delet socket after exiting block
    soc->deleteLater();
    //exit thread
    exit(0);

}

void MY_Thread::safevariable()
{

    string FileName = "SaveFile.txt";

    ofstream Save_TextFile;

    Save_TextFile.open(FileName,ios::in);


    string File_String = data_fin.toStdString();


    if(Save_TextFile.is_open() == true)
    {

        Save_TextFile << File_String;
        Save_TextFile.close();

        qDebug() << " File opened...";

    }

}

//void MY_Thread::Button()
//{

//}
