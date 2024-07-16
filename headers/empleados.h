#ifndef EMPLEADOS_H
#define EMPLEADOS_H
#include <string>
using namespace std;
class empleados {
private:
    string nombre;
    string cedula;
    string edad;
    string genero;
    string cargo;
public:
    empleados();
    ~empleados();
    empleados(string n,string c, string e,string g,string car);
    string getnombre()const;
    string getcedula()const;
    string getedad()const;
    string getgenero()const;
    string getcargo()const;
    string informacion()const;
};
#endif // Error in
