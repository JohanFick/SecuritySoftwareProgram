#include "MY_thread.h"

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
     QByteArray data_fin;
     data_fin = data_fin.fromStdString(dat);


    qDebug()<<"DATA RECEIVED from: "<<socketdescriptor<<data_fin;


     dat = cry->encryptDecrypt(dat);
     data_fin = data_fin.fromStdString(dat);

    soc->write(data_fin);



}

void MY_Thread::disconnect()
{
    qDebug()<<"socket disconnect, thread exit";
    //delet socket after exiting block
    soc->deleteLater();
    //exit thread
    exit(0);

}
