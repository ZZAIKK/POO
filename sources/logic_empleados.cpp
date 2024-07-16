
#include "headers/logic_empleados.h"
logic_empleados::logic_empleados()
{

}

logic_empleados::~logic_empleados()
{

}

bool logic_empleados::save(string a, string b, string c, string d, string e){
    empleados p(a,b,c,d,e);
    empleados_DAO pdao(p);
    pdao.writeProducts();


    return true;
}

std::vector<std::string> logic_empleados::loadInfoProduct(int index)
{
    vector<string> infop;
    vector<empleados> products= pdao.readProducts();
    int size=products.size();
    if((index>=0)&&(index<size)){
        infop.push_back(products[index].getnombre());
        infop.push_back(products[index].getcedula()); //casting string-int -> stoi casting int - string -> to_string
        infop.push_back(products[index].getedad());
        infop.push_back(products[index].getgenero());
        infop.push_back(products[index].getcargo());

    }
    return infop;
}

int logic_empleados::tamanio()
{
    vector<empleados> products= pdao.readProducts();
    int t=products.size();
    return t;
}
bool logic_empleados::validar(string nom , string c){
    bool access=false;
    empleados_DAO e;
   // vector<empleados> em =e.readProducts(); //cargando todos los usuarios
    for(const auto &i: e.readProducts()){
        //vector<string>tokens= std::s
        if(i.getnombre()==nom && i.getcedula()==c){
            access=true;
        }

    }
    return access;
}
