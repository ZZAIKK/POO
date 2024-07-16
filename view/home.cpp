#include "home.h"
#include "ui_home.h"

home::home(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::home)
   ,uiRp(new registerProduct)
    ,uiRu(new registroUser)
    ,uiCp(new consultProducts)
    ,uiAddProv(new addProvedores)
    ,uiClientes(new graficlientes)
    ,uiVentas(new class registrarVentas)
    ,uiEmpleados(new grafi_empleados)

{
    ui->setupUi(this);
    connect(ui->btn_registrar, SIGNAL(clicked()), this,SLOT(callRegisterProduct()));
    connect(ui->btn_usuarios,SIGNAL(clicked()), this, SLOT(callRegisterUser()));
    connect(ui->btn_consultar, SIGNAL(clicked()), this, SLOT(callConsultProducts()));
    connect(ui->btn_aggProvedores,SIGNAL(clicked()), this, SLOT(addProv()));
    connect(ui->btn_clientes,SIGNAL(clicked()), this, SLOT(callRegisterCliente()));
    connect(ui->btn_registrarVentas,SIGNAL(clicked()), this, SLOT(registrarVentas()));
    connect(ui->btn_registrarEmpleado,SIGNAL(clicked()), this, SLOT(callRegisterEmpleado()));
}

home::~home()
{
    delete ui;
}
void home::callRegisterProduct(){
    uiRp->show();
}
void home::callRegisterUser(){
    uiRu->show();
}
void home::callConsultProducts(){
    uiCp->show();
}
 void home::addProv(){
    uiAddProv->show();
 }
 void home::callRegisterCliente(){
     uiClientes->show();
 }
 void home::registrarVentas(){
     uiVentas->show();
 }
 void home::callRegisterEmpleado(){
     uiEmpleados->show();

 }
