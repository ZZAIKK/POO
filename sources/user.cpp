#include "../headers/user.h"

user::user(){
    this->nameUser="";
    this->psw="";
}
user::~user(){}
user::user(string name ,string _psw){
    nameUser=name;
    psw=_psw;
}

string user::getNameUser()const{
    return nameUser;
}
string user::getPsw()const{

    return psw;
}

void user::setNameUser(string n){
    this->nameUser=n;
}
void user::setPsw(string p){
    this->psw=p;
}
