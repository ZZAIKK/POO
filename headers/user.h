#ifndef USER_H
#define USER_H
#include <string>
using namespace std;

class user{
    string nameUser, psw;

public:
    user();
    ~user();
    user(string ,string);

    string getNameUser()const;
    string getPsw()const;

    void setNameUser(string);
    void setPsw(string);

};

#endif // USER_H
