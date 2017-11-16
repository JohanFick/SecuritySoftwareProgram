#include "crypt.h"

Crypt::Crypt()
{

}


std::string Crypt::encryptDecrypt(std::string toEncrypt)
{

        char key[3] = {'K', 'C', 'Q'}; //Any chars will work, in an array of any size
        std::string output = toEncrypt;

        for (int i = 0; i < toEncrypt.size(); i++)
             output[i] = toEncrypt[i] ^ key[i % (sizeof(key) / sizeof(char))];

        return output;







    return output;

}
