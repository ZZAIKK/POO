#ifndef PROVEDORES_H
#define PROVEDORES_H
#include <string>
using namespace std;
class provedores{
    string razonSocial;
    string nombres;
    string telefono;
    string email;
public:
    provedores();
    ~provedores();
    provedores(string, string, string,string);
    string informacionProvedores()const;

    string getRazonSocial()const;
    string getNombre()const;
    string getTelefono()const;
    string getEmail()const;
    void setRazonSocial(string);
    void setNombre(string);
    void setTlf(string);
    void setEmail(string);

};
#endif // PROVEDORES_H
