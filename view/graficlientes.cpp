#include "graficlientes.h"
#include "ui_graficlientes.h"
#include <QMessageBox>
using namespace std;
graficlientes::graficlientes(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::graficlientes)
{
    ui->setupUi(this);
   ptrLp=&lp;
    ui->pbtn_add->setEnabled(false);
}

graficlientes::~graficlientes()
{
    delete ui;
}

void graficlientes::clearfields()
{
    ui->txt_dni->clear();
    ui->txt_email->clear();
    ui->txt_name->clear();
    ui->txt_telf->clear();
    ui->txt_dir->clear();
}

void graficlientes::loadfields(int index)
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

void graficlientes::on_pbtn_add_clicked()
{
    string name=ui->txt_name->text().toStdString();
    string stock=ui->txt_dni->text().toStdString();
    string price= ui->txt_email->text().toStdString();
    string p= ui->txt_telf->text().toStdString();
    string c= ui->txt_dir->text().toStdString();
   if(ptrLp->save(name,stock,price,p,c)){
        QMessageBox::information(this,"Registro de producto","Registro exitoso");
        clearfields();
    }
}


void graficlientes::on_pbtn_previous_clicked()
{
    index--;
    loadfields(index);
}


void graficlientes::on_pbtn_next_clicked()
{
    index++;
    loadfields(index);
}


void graficlientes::on_pbtn_nuevo_clicked()
{
    clearfields();
    ui->pbtn_add->setEnabled(true);
}
