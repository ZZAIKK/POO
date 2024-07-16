#include <headers/provedores.h>

provedores::provedores(){}
provedores::~provedores(){}
provedores::provedores(string rs, string n, string t,string e){
    this->razonSocial=rs;
    this->nombres=n;
    this->telefono=t;
    this->email=e;
}
string provedores::informacionProvedores()const{
    return razonSocial+";"+nombres+";"+telefono+";"+email+"\n";
}
string provedores::getRazonSocial()const{
    return razonSocial;
}
string provedores::getNombre()const{
    return nombres;
}
string provedores::getTelefono()const{
    return telefono;
}
string provedores::getEmail()const{
    return email;
}
void  provedores::setRazonSocial(string r){
    this->razonSocial=r;
}
void  provedores::setNombre(string n){
    this->nombres=n;
}
void  provedores::setTlf(string t){
    this->telefono=t;
}
void  provedores::setEmail(string e){
    this->email=e;
}
