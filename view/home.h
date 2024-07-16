#ifndef HOME_H
#define HOME_H

#include "view/addprovedores.h"
#include "view/consultproducts.h"
#include "view/grafi_empleados.h"
#include "view/graficlientes.h"
#include "view/registerproduct.h"

#include "view/registrarventas.h"
#include "view/registrouser.h"
#include <QWidget>

namespace Ui {
class home;
}

class home : public QWidget
{
    Q_OBJECT

public:
    explicit home(QWidget *parent = nullptr);
    ~home();

private:
    Ui::home *ui;
    registerProduct *uiRp;
    registroUser *uiRu;
    consultProducts *uiCp;
    addProvedores *uiAddProv;
    graficlientes *uiClientes;
    registrarVentas *uiVentas;
   grafi_empleados *uiEmpleados;
private slots:
    void callRegisterProduct();
    void callRegisterUser();
    void callConsultProducts();
    void addProv();
    void callRegisterCliente();
    void registrarVentas();
    void callRegisterEmpleado();

};

#endif // HOME_H
