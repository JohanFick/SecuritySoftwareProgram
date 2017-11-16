#ifndef MY_THREAD_H
#define MY_THREAD_H

#include <QThread>
#include <QTcpSocket>
#include <QDebug>
#include <string>
#include "crypt.h"

class MY_Thread : public QThread
{
    Q_OBJECT
public:
    explicit MY_Thread(int ID,QObject *parent = 0);
    void run();
private:
     QTcpSocket *soc;
     int socketdescriptor;
     Crypt *cry;

signals:
     void error(QTcpSocket::SocketError socket_error);

public slots:
     void readyRead();
     void disconnect();

};

#endif // THREAD_H