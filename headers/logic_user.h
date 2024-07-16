#ifndef LOGIC_USER_H
#define LOGIC_USER_H
#include "headers/user.h"
#include "headers/userDAO.h"

class logic_user{
    userDAO udao;
    user u;
public:
    logic_user();
    bool validar(string , string);
    bool agregar(string, string, string);
};

#endif // LOGIC_USER_H
