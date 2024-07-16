#include "headers/clienteDAO.h"
#include <sstream>
#include <fstream>
#include <vector>
using namespace std;

clienteDAO::clienteDAO() {
    path = "C:\\Users\\REDMI\\Downloads\\ejercicio5_gesionInventario\\clientes.txt";
}

clienteDAO::~clienteDAO() {}

clienteDAO::clienteDAO(const cabcliente& p_) {
    this->p = p_;
}

void clienteDAO::writeProducts() {
    ofstream archivo(path, ios::app);
    if (archivo.is_open()) {
        archivo << p.informacion() << endl;
        archivo.close();
    }
}

vector<cabcliente> clienteDAO::readProducts() {
    vector<cabcliente> products;
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
        cabcliente p(tokens[0], tokens[1], tokens[2], tokens[3], tokens[4]);
        products.push_back(p);
    }
    return products;
}

vector<string> clienteDAO::split(char delimitador, string str) {
    vector<string> tokens;
    stringstream ss(str);
    string item;
    while (getline(ss, item, delimitador)) {
        tokens.push_back(item);
    }
    return tokens;
}
