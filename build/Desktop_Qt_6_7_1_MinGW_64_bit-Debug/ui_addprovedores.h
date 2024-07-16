/********************************************************************************
** Form generated from reading UI file 'addprovedores.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPROVEDORES_H
#define UI_ADDPROVEDORES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addProvedores
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *txt_nombre;
    QLabel *label_2;
    QLineEdit *txt_telf;
    QLabel *label_3;
    QLineEdit *txt_email;
    QLabel *label_4;
    QLineEdit *txt_razonSocial;
    QPushButton *btn_agregar;

    void setupUi(QWidget *addProvedores)
    {
        if (addProvedores->objectName().isEmpty())
            addProvedores->setObjectName("addProvedores");
        addProvedores->resize(245, 175);
        widget = new QWidget(addProvedores);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 20, 207, 138));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        txt_nombre = new QLineEdit(widget);
        txt_nombre->setObjectName("txt_nombre");

        gridLayout->addWidget(txt_nombre, 0, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        txt_telf = new QLineEdit(widget);
        txt_telf->setObjectName("txt_telf");

        gridLayout->addWidget(txt_telf, 1, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        txt_email = new QLineEdit(widget);
        txt_email->setObjectName("txt_email");

        gridLayout->addWidget(txt_email, 2, 1, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        txt_razonSocial = new QLineEdit(widget);
        txt_razonSocial->setObjectName("txt_razonSocial");

        gridLayout->addWidget(txt_razonSocial, 3, 1, 1, 1);

        btn_agregar = new QPushButton(widget);
        btn_agregar->setObjectName("btn_agregar");

        gridLayout->addWidget(btn_agregar, 4, 0, 1, 2);


        retranslateUi(addProvedores);

        QMetaObject::connectSlotsByName(addProvedores);
    } // setupUi

    void retranslateUi(QWidget *addProvedores)
    {
        addProvedores->setWindowTitle(QCoreApplication::translate("addProvedores", "Form", nullptr));
        label->setText(QCoreApplication::translate("addProvedores", "Nombre:", nullptr));
        label_2->setText(QCoreApplication::translate("addProvedores", "Telefono:", nullptr));
        label_3->setText(QCoreApplication::translate("addProvedores", "Email:", nullptr));
        txt_email->setText(QString());
        label_4->setText(QCoreApplication::translate("addProvedores", "Razon Social", nullptr));
        txt_razonSocial->setText(QString());
        btn_agregar->setText(QCoreApplication::translate("addProvedores", "AGREGAR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addProvedores: public Ui_addProvedores {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPROVEDORES_H
