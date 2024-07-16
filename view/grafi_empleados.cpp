#include "grafi_empleados.h"
#include "ui_grafi_empleados.h"
#include <QMessageBox>

grafi_empleados::grafi_empleados(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::grafi_empleados)
{
    ui->setupUi(this);
    ptrLp=&lp;
    ui->pbtn_add->setEnabled(false);
}

grafi_empleados::~grafi_empleados()
{
    delete ui;
}

void grafi_empleados::clearfields()
{
    ui->txt_dni->clear();
    ui->txt_email->clear();
    ui->txt_name->clear();
    ui->txt_telf->clear();
    ui->txt_dir->clear();
}

void grafi_empleados::loadfields(int index)
{
    ui->pbtn_add->setEnabled(false);
    vector<string> p=ptrLp->loadInfoProduct(index);
    if(p.size()>0){
        ui->txt_name->setText(QString::fromStdString(p[0]));
        ui->txt_dni->setText(QString::fromStdString(p[1]));
        ui->txt_email->setText(QString::fromStdString(p[2]));
        ui->txt_telf->setText(QString::fromStdString(p[3]));
        ui->txt_dir->setText(QString::fromStdString(p[4]));
    }else{
        QMessageBox::information(this,"Registro de productos","No existen mas productos");
    }
}

void grafi_empleados::on_pbtn_add_clicked()
{
    string name=ui->txt_name->text().toStdString();
    string stock=ui->txt_dni->text().toStdString();
    string price= ui->txt_email->text().toStdString();
    string p= ui->txt_telf->text().toStdString();
    string c= ui->txt_dir->text().toStdString();
    if(ptrLp->save(name,stock,price,p,c)){
        QMessageBox::information(this,"Registro de empleados","Registro exitoso");
        clearfields();
    }else{
        QMessageBox::information(this,"ERROR","Error al registrar empelado");
    }
}


void grafi_empleados::on_pbtn_previous_clicked()
{
    index--;
    loadfields(index);
}


void grafi_empleados::on_pbtn_next_clicked()
{
    index++;
    loadfields(index);
}


void grafi_empleados::on_pbtn_nuevo_clicked()
{
    clearfields();
    ui->pbtn_add->setEnabled(true);
}
