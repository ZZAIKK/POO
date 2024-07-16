#ifndef EMPLEADOS_DAO_H
#define EMPLEADOS_DAO_H
#include <fstream>
#include <filesystem>
#include <headers/empleados.h>
using namespace  std ;
class empleados_DAO{
private:
    empleados p;
    fstream archivo;
    string path="C:\\Users\\REDMI\\Downloads\\ejercicio5_gesionInventario\\empleados.txt";
public:
    empleados_DAO();
    ~empleados_DAO();
    empleados_DAO(const empleados &p_);
    void writeProducts();
    vector<empleados> readProducts();
    vector<string> split (char delimitador,string str);

};

#endif // Error in
