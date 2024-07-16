
#include "headers/logic_product.h"
logic_product::logic_product(){}
logic_product::~logic_product(){}

bool logic_product::save(string n,int s, double p){
    product pr(n, s, p);
    productDAO dao(pr);
    dao.writeProducts();
    return true;
}
vector<string>logic_product::loadInfoProduct(int index){
    vector<string> infoP; //retorna la infromacion del producto
    vector<product>products=pdao.readProducts(); //carga todos los productos del archivo
    int size=products.size();// tam de vector
    if(index>=0 && index<size){
        infoP.push_back(products[index].getName()); //nombre del prodcuto
        infoP.push_back(to_string(products[index].getStock()));//casting int-string ->stoi  string-int->to_string
        infoP.push_back(to_string(products[index].getPrice()));

    }
    return infoP;

}

