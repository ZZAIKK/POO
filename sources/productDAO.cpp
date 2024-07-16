#include "../headers/productDAO.h"
#include <string>
#include <sstream>

vector<string>split(string str, char delimitador){
    vector<string>tokens;
    stringstream ss(str);
    string item;

    while(getline(ss, item, delimitador)){
        tokens.push_back(item);
    }
    return tokens;
}
productDAO::productDAO(){}
productDAO::~productDAO(){}
productDAO::productDAO(const  product& _p){
    this->p=_p;

}

void productDAO::writeProducts(){
    archivo.open(path, ios::app);
    if(archivo.is_open()){
        archivo<<p.information(); // salto de linea poner aqui si no vale
        archivo.close();
    }
}
vector<product> productDAO::readProducts(){
    vector <product> productos;
    vector<string>dataFile; //recupera el contenido del archivo

    archivo.open(path, ios::in);

    if(archivo.is_open()){
        string linea="";
        while(getline(archivo, linea)){
            dataFile.push_back(linea);
        }
        archivo.close();
    }

    for(auto & str:dataFile){
        vector <string>tokens=split(str, ';'); //separa por ;
        product p;
        p.setName(tokens[0]);
        p.setStock(stoi(tokens[1])); // convertir un int una cadena de caracterres
        p.setPrice(stod(tokens[2])); // precio del produto
        productos.push_back(p);
    }

    return productos;
}

int productDAO::tamanio(){
    vector<string>dataFile; //recupera el contenido del archivo

    archivo.open(path, ios::in);

    if(archivo.is_open()){
        string linea="";
        while(getline(archivo, linea)){
            dataFile.push_back(linea);
        }
        archivo.close();
    }
    return dataFile.size();
}

bool productDAO::actualizar(string h,int can)
{
    vector<product> g=readProducts();
    int op;
    archivo.open(path, ios::out);
    if(archivo.is_open()){
        for(auto i:g){
            if((i.getName()==h)&&(i.getStock()>=can)){
                op=i.getStock()-can;
                i.setStock(op);
                return true;
            }
            archivo<<i.information()<<endl; // salto de linea poner aqui si no vale
        }
        archivo.close();

    }
    return false;
}
