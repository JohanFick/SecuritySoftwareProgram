#ifndef CRYPT_H
#define CRYPT_H

#include <QObject>
#include <QDebug>
#include <QString>
#include <QByteArray>
#include <iostream>
#include <string>

class Crypt
{
public:
    Crypt();
   std::string encryptDecrypt(std::string toEncrypt);


};

#endif // CRYPT_H
