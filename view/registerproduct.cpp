#include "registerproduct.h"
#include <QMessageBox>
#include <iostream>
#include "ui_registerproduct.h"
using namespace  std ;
registerProduct::registerProduct(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::registerProduct)
{
    ptrLp=&l;
    ui->setupUi(this);

    ui->btn_agregar->setEnabled(false);
    connect(ui->btn_agregar, SIGNAL(clicked()), this, SLOT(saveProduct()));
    connect(ui->btn_next,SIGNAL(clicked()), this, SLOT(next()));
    connect(ui->btn_previous,SIGNAL(clicked()), this, SLOT(prev()));
  connect(ui->btn_new,SIGNAL(clicked()), this, SLOT(newProduct()));
}

registerProduct::~registerProduct()
{
    delete ui;
}
void registerProduct::saveProduct(){
    string name=ui->txt_producto->text().toStdString();
    int stock=ui->txt_unidades->text().toInt();
    double price=ui->txt_precio->text().toDouble();

    if(ptrLp->save(name, stock, price)){
        QMessageBox::information(this, "PRODUCTOS", "Producto guardado correctamente");
        clearFields();
    }
}
void registerProduct::clearFields(){
    ui->txt_producto->clear();
    ui->txt_precio->clear();
    ui->txt_unidades->clear();
}
void registerProduct::prev(){
    index--;
    leadFields(index);
}

void registerProduct::next(){
    index++;
    leadFields(index);

}

void registerProduct::leadFields(int index){
    ui->btn_agregar->setEnabled(false);
    vector<string>p=ptrLp->loadInfoProduct(index);
    if(p.size()>0){
        ui->txt_producto->setText(QString::fromStdString(p[0]));
        ui->txt_unidades->setText(QString::fromStdString(p[1]));
        ui->txt_precio->setText(QString::fromStdString(p[2]));
    }else{
        QMessageBox::information(this, "Registro de productos", "No existen mas productos");
    }
}
void registerProduct::newProduct(){
    ui->btn_agregar->setEnabled(true);
    clearFields();

}
