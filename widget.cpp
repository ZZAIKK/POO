#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>
#include <iostream>
using namespace std;
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
    ,uiHome(new home)
    ,uiVentas(new registrarVentas)


{
    ui->setupUi(this);
    connect(ui->btn_login,SIGNAL(clicked()), this, SLOT(validar()));

    ptrLu=&lu;
}

Widget::~Widget()
{
    delete ui;
}

void Widget::validar(){
    string user=ui->txt_usuario->text().toStdString();
    string psw=ui->txt_usuario_2->text().toStdString();

    if(ui->rbt_empleado->isChecked()){
        if(e.validar(user,psw)){
            QMessageBox::information(this, "GESTOR DE INVENTARIO", "Bienvenido "+QString::fromStdString(user));
            uiVentas->show();

        }else{
            QMessageBox::information(this, "ERROR", "Credenciales Incorrectaas");
         //   ui->rbt_empleado->setCheckable(false);
        }
    }else if(ptrLu->validar(user, psw)){
        QMessageBox::information(this, "GESTOR DE INVENTARIO", "Bienvenido "+QString::fromStdString(user));
        uiHome->show();

    }else QMessageBox::information(this, "ERROR", "Credenciales Incorrectaas");
    //u.loadUsers();
    clearfields();
}
void Widget::clearfields(){
    ui->txt_usuario->clear();
    ui->txt_usuario_2->clear();
}
