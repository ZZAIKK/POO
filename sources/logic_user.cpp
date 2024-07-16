#include "../headers/logic_user.h"


logic_user::logic_user(){}
bool logic_user::validar(string u , string p){
    bool access=false;
    vector<string> users =udao.loadUsers(); //cargando todos los usuarios
    for(const string &usuario: users){
        //vector<string>tokens= std::s
        if(usuario== (u+";"+p+";0")){
            access=true;
        }
    }
    return access;
}
bool logic_user::agregar(string u, string psw, string psw2){
    if(psw==psw2){


        if(udao.guardar(u, psw)){
            return true;
        }else return false;

    }

    return false;
}
