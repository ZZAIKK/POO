/********************************************************************************
** Form generated from reading UI file 'registrarventas.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRARVENTAS_H
#define UI_REGISTRARVENTAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_registrarVentas
{
public:
    QLabel *label;
    QLineEdit *txt_cedula;
    QPushButton *btn_buscar;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *lbl_nombre;
    QLabel *label_9;
    QLabel *lbl_telefono;
    QLabel *label_4;
    QLabel *lbl_direccion;
    QLabel *label_7;
    QLabel *lbl_correo;
    QLabel *label_3;
    QLabel *lbl_empleado;
    QLabel *label_5;
    QComboBox *cb_productos;
    QSpinBox *spinBox_cantidad;
    QLabel *label_6;
    QTableWidget *tableWidget_ventas;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QLabel *label_8;
    QLabel *lbl_subtotal;
    QLabel *label_10;
    QLabel *lbl_iva;
    QLabel *label_11;
    QLabel *lbl_total;
    QPushButton *btn_pagar;

    void setupUi(QWidget *registrarVentas)
    {
        if (registrarVentas->objectName().isEmpty())
            registrarVentas->setObjectName("registrarVentas");
        registrarVentas->resize(662, 589);
        label = new QLabel(registrarVentas);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 49, 16));
        txt_cedula = new QLineEdit(registrarVentas);
        txt_cedula->setObjectName("txt_cedula");
        txt_cedula->setGeometry(QRect(50, 10, 113, 22));
        btn_buscar = new QPushButton(registrarVentas);
        btn_buscar->setObjectName("btn_buscar");
        btn_buscar->setGeometry(QRect(210, 10, 75, 24));
        layoutWidget = new QWidget(registrarVentas);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 50, 522, 51));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        lbl_nombre = new QLabel(layoutWidget);
        lbl_nombre->setObjectName("lbl_nombre");
        lbl_nombre->setFrameShape(QFrame::NoFrame);

        gridLayout->addWidget(lbl_nombre, 0, 1, 1, 1);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName("label_9");

        gridLayout->addWidget(label_9, 0, 2, 1, 1);

        lbl_telefono = new QLabel(layoutWidget);
        lbl_telefono->setObjectName("lbl_telefono");
        lbl_telefono->setFrameShape(QFrame::NoFrame);

        gridLayout->addWidget(lbl_telefono, 0, 3, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        lbl_direccion = new QLabel(layoutWidget);
        lbl_direccion->setObjectName("lbl_direccion");
        lbl_direccion->setFrameShape(QFrame::NoFrame);

        gridLayout->addWidget(lbl_direccion, 1, 1, 1, 1);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");

        gridLayout->addWidget(label_7, 1, 2, 1, 1);

        lbl_correo = new QLabel(layoutWidget);
        lbl_correo->setObjectName("lbl_correo");
        lbl_correo->setFrameShape(QFrame::NoFrame);

        gridLayout->addWidget(lbl_correo, 1, 3, 1, 1);

        label_3 = new QLabel(registrarVentas);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 130, 101, 16));
        lbl_empleado = new QLabel(registrarVentas);
        lbl_empleado->setObjectName("lbl_empleado");
        lbl_empleado->setGeometry(QRect(110, 130, 186, 21));
        lbl_empleado->setFrameShape(QFrame::NoFrame);
        label_5 = new QLabel(registrarVentas);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 170, 101, 16));
        cb_productos = new QComboBox(registrarVentas);
        cb_productos->setObjectName("cb_productos");
        cb_productos->setGeometry(QRect(100, 170, 171, 26));
        spinBox_cantidad = new QSpinBox(registrarVentas);
        spinBox_cantidad->setObjectName("spinBox_cantidad");
        spinBox_cantidad->setGeometry(QRect(410, 170, 42, 26));
        label_6 = new QLabel(registrarVentas);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(340, 180, 101, 16));
        tableWidget_ventas = new QTableWidget(registrarVentas);
        tableWidget_ventas->setObjectName("tableWidget_ventas");
        tableWidget_ventas->setGeometry(QRect(20, 220, 531, 192));
        widget = new QWidget(registrarVentas);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(390, 430, 161, 118));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");

        gridLayout_2->addWidget(label_8, 0, 0, 1, 1);

        lbl_subtotal = new QLabel(widget);
        lbl_subtotal->setObjectName("lbl_subtotal");
        lbl_subtotal->setFrameShape(QFrame::Box);

        gridLayout_2->addWidget(lbl_subtotal, 0, 1, 1, 1);

        label_10 = new QLabel(widget);
        label_10->setObjectName("label_10");

        gridLayout_2->addWidget(label_10, 1, 0, 1, 1);

        lbl_iva = new QLabel(widget);
        lbl_iva->setObjectName("lbl_iva");
        lbl_iva->setFrameShape(QFrame::Box);

        gridLayout_2->addWidget(lbl_iva, 1, 1, 1, 1);

        label_11 = new QLabel(widget);
        label_11->setObjectName("label_11");

        gridLayout_2->addWidget(label_11, 2, 0, 1, 1);

        lbl_total = new QLabel(widget);
        lbl_total->setObjectName("lbl_total");
        lbl_total->setFrameShape(QFrame::Box);

        gridLayout_2->addWidget(lbl_total, 2, 1, 1, 1);

        btn_pagar = new QPushButton(widget);
        btn_pagar->setObjectName("btn_pagar");

        gridLayout_2->addWidget(btn_pagar, 3, 0, 1, 2);


        retranslateUi(registrarVentas);

        QMetaObject::connectSlotsByName(registrarVentas);
    } // setupUi

    void retranslateUi(QWidget *registrarVentas)
    {
        registrarVentas->setWindowTitle(QCoreApplication::translate("registrarVentas", "Form", nullptr));
        label->setText(QCoreApplication::translate("registrarVentas", "CI:", nullptr));
        btn_buscar->setText(QCoreApplication::translate("registrarVentas", "Buscar", nullptr));
        label_2->setText(QCoreApplication::translate("registrarVentas", "Nombre:", nullptr));
        lbl_nombre->setText(QCoreApplication::translate("registrarVentas", "_______________________________", nullptr));
        label_9->setText(QCoreApplication::translate("registrarVentas", "Telefono:", nullptr));
        lbl_telefono->setText(QCoreApplication::translate("registrarVentas", "_______________________________", nullptr));
        label_4->setText(QCoreApplication::translate("registrarVentas", "Direccion:", nullptr));
        lbl_direccion->setText(QCoreApplication::translate("registrarVentas", "_______________________________", nullptr));
        label_7->setText(QCoreApplication::translate("registrarVentas", "Correo:", nullptr));
        lbl_correo->setText(QCoreApplication::translate("registrarVentas", "_______________________________", nullptr));
        label_3->setText(QCoreApplication::translate("registrarVentas", "Empleado:", nullptr));
        lbl_empleado->setText(QCoreApplication::translate("registrarVentas", "_______________________________", nullptr));
        label_5->setText(QCoreApplication::translate("registrarVentas", "Producto:", nullptr));
        label_6->setText(QCoreApplication::translate("registrarVentas", "Cantidad:", nullptr));
        label_8->setText(QCoreApplication::translate("registrarVentas", "Subtotal:", nullptr));
        lbl_subtotal->setText(QCoreApplication::translate("registrarVentas", "0.0", nullptr));
        label_10->setText(QCoreApplication::translate("registrarVentas", "Iva 15%", nullptr));
        lbl_iva->setText(QCoreApplication::translate("registrarVentas", "0.0", nullptr));
        label_11->setText(QCoreApplication::translate("registrarVentas", "Total:", nullptr));
        lbl_total->setText(QCoreApplication::translate("registrarVentas", "0.0", nullptr));
        btn_pagar->setText(QCoreApplication::translate("registrarVentas", "Pagar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registrarVentas: public Ui_registrarVentas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRARVENTAS_H
