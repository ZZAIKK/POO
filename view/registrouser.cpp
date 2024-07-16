#include "registrouser.h"
#include "ui_registrouser.h"
#include <QMessageBox>
registroUser::registroUser(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::registroUser)
{
    ui->setupUi(this);
    connect(ui->btn_agregar,SIGNAL(clicked()), this, SLOT(btn_agg()));
}

registroUser::~registroUser()
{
    delete ui;
}
void registroUser::btn_agg(){

    string user=ui->txt_usuario->text().toStdString();
    string psw=ui->txt_psw->text().toStdString();
    string psw2=ui->txt_pswConfrimar->text().toStdString();

    if(l.agregar(user, psw, psw2)){
        QMessageBox::information(this, "Usuario", "Usuario añadido correctamente");
    }else{
        if(psw!=psw2){
            QMessageBox::information(this, "ERROR", "Confirmacion de contraseña incorrecta");
        }else QMessageBox::information(this, "ERROR","No se pudo añadir el usuairo");
    }
}
