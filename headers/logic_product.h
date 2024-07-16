#ifndef LOGIC_PRODUCT_H
#define LOGIC_PRODUCT_H

#include "productDAO.h"
class logic_product{
    productDAO pdao;

public:
    logic_product();
    ~logic_product();

    vector<string>loadInfoProduct(int);
    bool save(string i,int , double);
};


#endif // LOGIC_PRODUCT_H
