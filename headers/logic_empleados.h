#ifndef LOGIC_EMPLEADOS_H
#define LOGIC_EMPLEADOS_H
#include "headers/empleadosDAO.h"
class logic_empleados{
private:
    empleados_DAO pdao;
public:
    logic_empleados();
    ~logic_empleados();
    bool save(string,string,string,string,string);
    vector<string> loadInfoProduct(int);
    int tamanio();
    bool validar(string , string);
};
#endif // no
