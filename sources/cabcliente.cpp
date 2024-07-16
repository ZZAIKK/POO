
#include "headers/cabcliente.h"
#include <string>
using namespace std;
cabcliente::~cabcliente()
{

}

cabcliente::cabcliente()
{
    name = "";
    dni = "";
    correo = "";
    telefono = "";
    direcc = "";
}

string cabcliente::informacion()
{
    return name+";"+dni+";"+correo+";"+telefono+";"+direcc;
}

string cabcliente::getname()
{
    return name;
}

string cabcliente::getdni()
{
    return dni;
}

string cabcliente::getcorreo()
{
    return correo;
}

string cabcliente::gettelefono()
{
    return telefono;
}

string cabcliente::getdirecc()
{
    return direcc;
}

cabcliente::cabcliente(string n, string d, string c, string t, string dir)
{
    name=n;
    dni=d;
    correo=c;
    telefono=t;
    direcc=dir;
}
