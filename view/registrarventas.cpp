#include "registrarventas.h"
#include "ui_registrarventas.h"
#include <string>
#include <fstream>
using namespace std;

registrarVentas::registrarVentas(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::registrarVentas)
{
    ui->setupUi(this);
    connect(ui->btn_buscar, SIGNAL(clicked()), this, SLOT(btn_buscar()));
}

registrarVentas::~registrarVentas() {
    delete ui;
}

void registrarVentas::btn_buscar() {
    string cedula = ui->txt_cedula->text().toStdString();

    for (auto i : c.readProducts()) {
        if (i.getdni() == cedula) {
            ui->lbl_correo->setText(QString::fromStdString(i.getcorreo()));
            ui->lbl_nombre->setText(QString::fromStdString(i.getname()));
            ui->lbl_direccion->setText(QString::fromStdString(i.getdirecc()));
            ui->lbl_telefono->setText(QString::fromStdString(i.gettelefono()));
        }
    }
}

void registrarVentas::registrarVenta(const string& cedula, const string& producto, const string& cantidad) {
    ofstream archivo("C:\\Users\\REDMI\\Downloads\\ejercicio5_gesionInventario\\ventas.txt", ios::app);
    if (archivo.is_open()) {
        archivo << cedula << ";" << producto << ";" << cantidad << endl;
        archivo.close();
    }
}
