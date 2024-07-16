#ifndef CABCLIENTE_H
#define CABCLIENTE_H
#include <string>
using namespace std;
class cabcliente{
private:
    string name;
    string dni;
    string correo;
    string telefono;
    string direcc ;
public:
    cabcliente();
    string informacion();
    string getname();
    string getdni();
    string getcorreo();
    string gettelefono();
    string getdirecc();
    cabcliente(string n, string d, string c, string t, string dir);
    ~cabcliente();
};

#endif // Error in "
