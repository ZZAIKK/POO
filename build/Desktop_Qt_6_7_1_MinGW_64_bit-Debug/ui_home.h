/********************************************************************************
** Form generated from reading UI file 'home.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_H
#define UI_HOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_home
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *btn_aggProvedores;
    QPushButton *btn_usuarios;
    QPushButton *btn_clientes;
    QPushButton *btn_registrarEmpleado;
    QPushButton *btn_registrar;
    QPushButton *btn_consultar;
    QPushButton *btn_registrarVentas;

    void setupUi(QWidget *home)
    {
        if (home->objectName().isEmpty())
            home->setObjectName("home");
        home->resize(365, 333);
        layoutWidget = new QWidget(home);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 20, 193, 247));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btn_aggProvedores = new QPushButton(layoutWidget);
        btn_aggProvedores->setObjectName("btn_aggProvedores");

        verticalLayout->addWidget(btn_aggProvedores);

        btn_usuarios = new QPushButton(layoutWidget);
        btn_usuarios->setObjectName("btn_usuarios");

        verticalLayout->addWidget(btn_usuarios);

        btn_clientes = new QPushButton(layoutWidget);
        btn_clientes->setObjectName("btn_clientes");

        verticalLayout->addWidget(btn_clientes);

        btn_registrarEmpleado = new QPushButton(layoutWidget);
        btn_registrarEmpleado->setObjectName("btn_registrarEmpleado");

        verticalLayout->addWidget(btn_registrarEmpleado);

        btn_registrar = new QPushButton(layoutWidget);
        btn_registrar->setObjectName("btn_registrar");

        verticalLayout->addWidget(btn_registrar);

        btn_consultar = new QPushButton(layoutWidget);
        btn_consultar->setObjectName("btn_consultar");

        verticalLayout->addWidget(btn_consultar);

        btn_registrarVentas = new QPushButton(layoutWidget);
        btn_registrarVentas->setObjectName("btn_registrarVentas");

        verticalLayout->addWidget(btn_registrarVentas);


        retranslateUi(home);

        QMetaObject::connectSlotsByName(home);
    } // setupUi

    void retranslateUi(QWidget *home)
    {
        home->setWindowTitle(QCoreApplication::translate("home", "Form", nullptr));
        btn_aggProvedores->setText(QCoreApplication::translate("home", "AGREGAR PROVEDORES", nullptr));
        btn_usuarios->setText(QCoreApplication::translate("home", "REGISTRAR USUARIOS", nullptr));
        btn_clientes->setText(QCoreApplication::translate("home", "REGISTRAR CLIENTES", nullptr));
        btn_registrarEmpleado->setText(QCoreApplication::translate("home", "REGISTRAR EMPLEADO", nullptr));
        btn_registrar->setText(QCoreApplication::translate("home", " REGISTRAR PRODUCT", nullptr));
        btn_consultar->setText(QCoreApplication::translate("home", "CONSULTAR PRODUCTOS", nullptr));
        btn_registrarVentas->setText(QCoreApplication::translate("home", "REGISTRAR VENTAS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class home: public Ui_home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
