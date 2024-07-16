#include "headers/empleadosDAO.h"
#include <sstream>
#include <fstream>
#include <vector>
using namespace std;

empleados_DAO::empleados_DAO() {
    path = "C:\\Users\\REDMI\\Downloads\\ejercicio5_gesionInventario\\empleados.txt";
}

empleados_DAO::~empleados_DAO() {}

empleados_DAO::empleados_DAO(const empleados& p_) {
    this->p = p_;
}

void empleados_DAO::writeProducts() {
    ofstream archivo(path, ios::app);
    if (archivo.is_open()) {
        archivo << p.informacion() << endl;
        archivo.close();
    }
}

vector<empleados> empleados_DAO::readProducts() {
    vector<empleados> products;
    vector<string> datafile;
    ifstream archivo(path);
    if (archivo.is_open()) {
        string linea;
        while (getline(archivo, linea)) {
            datafile.push_back(linea);
        }
        archivo.close();
    }
    for (string &str : datafile) {
        vector<string> tokens = split(';', str);
        empleados p(tokens[0], tokens[1], tokens[2], tokens[3], tokens[4]);
        products.push_back(p);
    }
    return products;
}

vector<string> empleados_DAO::split(char delimitador, string str) {
    vector<string> tokens;
    stringstream ss(str);
    string item;
    while (getline(ss, item, delimitador)) {
        tokens.push_back(item);
    }
    return tokens;
}
