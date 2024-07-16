#ifndef CLIENTE_H
#define CLIENTE_H
#include "headers/cabcliente.h"
#include <fstream>

#include <vector>
using namespace std;

class clienteDAO{
private:
    cabcliente p;
    fstream archivo;
    string path="C:\\Users\\REDMI\\Downloads\\ejercicio5_gesionInventario\\clientes.txt";
public:
    clienteDAO();
    ~clienteDAO();
    clienteDAO(const cabcliente &p_);
    void writeProducts();
    vector<cabcliente> readProducts();

    vector<string> split (char delimitador,string str);

};
#endif // Error
