#ifndef REGISTRARVENTAS_H
#define REGISTRARVENTAS_H

#include "headers/clienteDAO.h"
#include "headers/logic_cliente.h"
#include <QWidget>

namespace Ui {
class registrarVentas;
}

class registrarVentas : public QWidget {
    Q_OBJECT

public:
    explicit registrarVentas(QWidget *parent = nullptr);
    ~registrarVentas();

private:
    Ui::registrarVentas *ui;
    clienteDAO c;

private slots:
    void btn_buscar();
    void registrarVenta(const std::string& cedula, const std::string& producto, const std::string& cantidad);
};

#endif // REGISTRARVENTAS_H
