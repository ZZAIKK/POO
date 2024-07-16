#ifndef PROVEDORDAO_H
#define PROVEDORDAO_H
#include <fstream>
#include <filesystem>
#include "headers/provedores.h"
class provedorDAO{
    provedores prov;
    fstream archivo;
    string path="C:\\Users\\REDMI\\Downloads\\ejercicio5_gesionInventario\\proveedores.txt";

public:
    provedorDAO();
    ~provedorDAO();

    provedorDAO(const  provedores&);
    void writeProducts();

};
#endif // PROVEDORDAO_H
