#include "myserver.h"

MyServer::MyServer(QObject *parent)
{

}

void MyServer::startServer()
{
    if(!this->listen(QHostAddress::Any,1234))
    {
        qDebug()<<"Could not start server";

    }
    else
    {
        qDebug()<<"LISTENING ON PORT 1234, accepting any IP adress........";

    }

}

void MyServer::incomingConnection(int socketDescriptor)
{
    qDebug() <<socketDescriptor<<"....CONNECTING... ";
     MY_Thread *thred = new MY_Thread(socketDescriptor,this);
     //flag thread for deletion once it is done, thus when connection is dropped
     connect(thred,SIGNAL(finished()),thred,SLOT(deleteLater()));
     //stert the thred
     thred->start();
}
