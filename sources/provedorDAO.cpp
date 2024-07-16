#include "headers/provedorDAO.h"
#include <sstream>
#include <fstream>
#include <vector>
using namespace std;

provedorDAO::provedorDAO() {
    path = "C:\\Users\\REDMI\\Downloads\\ejercicio5_gesionInventario\\proveedores.txt";
}

provedorDAO::~provedorDAO() {}

provedorDAO::provedorDAO(const provedores& _p) {
    this->prov = _p;
}

void provedorDAO::writeProducts() {
    ofstream archivo(path, ios::app);
    if (archivo.is_open()) {
        archivo << prov.informacionProvedores() << endl;
        archivo.close();
    }
}
