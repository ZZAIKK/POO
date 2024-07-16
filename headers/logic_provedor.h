#ifndef LOGIC_PROVEDOR_H
#define LOGIC_PROVEDOR_H
#include "headers/provedorDAO.h"
class logicProvedor{
    provedorDAO provDAO;

public:
    logicProvedor();
    ~logicProvedor();

    bool save(string, string, string, string);
};
#endif // LOGIC_PROVEDOR_H
