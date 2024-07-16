#include "headers/empleados.h"
empleados::empleados()
{
    nombre="";
    cedula="";
    edad="";
    genero="";
    cargo="";
}

empleados::~empleados()
{

}

empleados::empleados(string n, string c, string e, string g, string car)
{
    nombre=n;
    cedula=c;
    edad=e;
    genero=g;
    cargo=car;
}

string empleados::getnombre()const
{
    return nombre;
}

std::string empleados::getcedula()const
{
    return cedula;
}

std::string empleados::getedad()const
{
    return edad;
}

std::string empleados::getgenero()const
{
    return genero;
}

std::string empleados::getcargo()const
{
    return cargo;
}

string empleados::informacion()const
{
    return nombre+";"+cedula+";"+edad+";"+genero+";"+cargo+";1";
}
