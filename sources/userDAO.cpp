#include "headers/userDAO.h"
#include <iostream>

userDAO::userDAO(const user& u){
    this->usuario=u;
}

vector<string> userDAO::loadUsers(){
    vector <string> users;
    archivo.open("C://Users//REDMI//Downloads//ejercicio5_gesionInventario//users.txt", ios::in);

    if(archivo.is_open()){
        string linea="";
        while(getline(archivo, linea)){
            cout<<linea<<endl;
            users.push_back(linea);
        }
        archivo.close();
    }
    return users;
}

userDAO::userDAO(){}
bool userDAO::guardar(string u, string p){
    archivo.open("C://ejerciciosFS//users.txt", ios::app);
    if(archivo.is_open()){
        archivo<<u<<";"<<p<<";0\n";
        archivo.close();
        return true;
    }else return false;
}
