
#include "headers/logic_cliente.h"
bool logic_cliente::save(string a, string b, string c, string d, string e)
{
    cabcliente p(a,b,c,d,e);
    clienteDAO pdao(p);
    pdao.writeProducts();
    return true;
}

logic_cliente::~logic_cliente()
{

}



int logic_cliente::tamanio()
{
    vector<cabcliente> products= pdao.readProducts();
    int t=products.size();
    return t;
}

vector<string> logic_cliente::loadInfoProduct(int index)
{
    vector<string> infop;
    vector<cabcliente> products= pdao.readProducts();
    int size=products.size();
    if((index>=0)&&(index<size)){
        infop.push_back(products[index].getname());
        infop.push_back(products[index].getdni()); //casting string-int -> stoi casting int - string -> to_string
        infop.push_back(products[index].getcorreo());
        infop.push_back(products[index].gettelefono());
        infop.push_back(products[index].getdirecc());

    }
    return infop;
}
vector<cabcliente>logic_cliente::getclientes()const{
    clienteDAO c;
    return c.readProducts();
}
