#include "addprovedores.h"
#include "ui_addprovedores.h"
#include <string>
#include <QMessageBox>
using namespace std;
addProvedores::addProvedores(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::addProvedores)
{
    ui->setupUi(this);
    connect(ui->btn_agregar,SIGNAL(clicked()), this, SLOT(addprov()));
}

addProvedores::~addProvedores()
{
    delete ui;
}
void addProvedores::addprov(){

    string nom=ui->txt_nombre->text().toStdString();
    string razonSocial=ui->txt_razonSocial->text().toStdString();
    string telefono=ui->txt_telf->text().toStdString();
    string email=ui->txt_email->text().toStdString();
    if(lp.save(razonSocial, nom, telefono, email)){
        QMessageBox::information(this, "GUARDADO", "Provedor guardado exitosamente");
        close();
    }else{
        QMessageBox::information(this, "ERROR", "no se pudo guardar correctamente");


    }
    clean();
}
void addProvedores::clean(){
    ui->txt_email->clear();
    ui->txt_nombre->clear();
    ui->txt_razonSocial->clear();
    ui->txt_telf->clear();
}
