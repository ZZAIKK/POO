#ifndef PRODUCTDAO_H
#define PRODUCTDAO_H
#include <fstream>
#include <vector>
#include "headers/product.h"
using namespace std;
class productDAO{
    product p;
    fstream archivo;
    string path="C:\\Users\\REDMI\\Downloads\\ejercicio5_gesionInventario\\producto.txt";
public:

    productDAO();
    ~productDAO();

    productDAO(const  product&);
    void writeProducts();

    vector<product> readProducts();
    int tamanio();
    bool actualizar(string h, int can);
};
#endif // PRODUCTDAO_H
