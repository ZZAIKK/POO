/********************************************************************************
** Form generated from reading UI file 'grafi_empleados.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAFI_EMPLEADOS_H
#define UI_GRAFI_EMPLEADOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_grafi_empleados
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pbtn_previous;
    QPushButton *pbtn_next;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *txt_name;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *txt_dni;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *txt_email;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *txt_telf;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *txt_dir;
    QPushButton *pbtn_add;
    QPushButton *pbtn_nuevo;

    void setupUi(QWidget *grafi_empleados)
    {
        if (grafi_empleados->objectName().isEmpty())
            grafi_empleados->setObjectName("grafi_empleados");
        grafi_empleados->resize(316, 342);
        layoutWidget = new QWidget(grafi_empleados);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(60, 30, 201, 282));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        pbtn_previous = new QPushButton(layoutWidget);
        pbtn_previous->setObjectName("pbtn_previous");

        horizontalLayout_6->addWidget(pbtn_previous);

        pbtn_next = new QPushButton(layoutWidget);
        pbtn_next->setObjectName("pbtn_next");

        horizontalLayout_6->addWidget(pbtn_next);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        txt_name = new QLineEdit(layoutWidget);
        txt_name->setObjectName("txt_name");

        horizontalLayout->addWidget(txt_name);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        txt_dni = new QLineEdit(layoutWidget);
        txt_dni->setObjectName("txt_dni");

        horizontalLayout_2->addWidget(txt_dni);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        txt_email = new QLineEdit(layoutWidget);
        txt_email->setObjectName("txt_email");

        horizontalLayout_3->addWidget(txt_email);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        txt_telf = new QLineEdit(layoutWidget);
        txt_telf->setObjectName("txt_telf");

        horizontalLayout_4->addWidget(txt_telf);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        horizontalLayout_5->addWidget(label_5);

        txt_dir = new QLineEdit(layoutWidget);
        txt_dir->setObjectName("txt_dir");

        horizontalLayout_5->addWidget(txt_dir);


        verticalLayout_2->addLayout(horizontalLayout_5);

        pbtn_add = new QPushButton(layoutWidget);
        pbtn_add->setObjectName("pbtn_add");

        verticalLayout_2->addWidget(pbtn_add);

        pbtn_nuevo = new QPushButton(layoutWidget);
        pbtn_nuevo->setObjectName("pbtn_nuevo");

        verticalLayout_2->addWidget(pbtn_nuevo);


        retranslateUi(grafi_empleados);

        QMetaObject::connectSlotsByName(grafi_empleados);
    } // setupUi

    void retranslateUi(QWidget *grafi_empleados)
    {
        grafi_empleados->setWindowTitle(QCoreApplication::translate("grafi_empleados", "Form", nullptr));
        pbtn_previous->setText(QCoreApplication::translate("grafi_empleados", "<<", nullptr));
        pbtn_next->setText(QCoreApplication::translate("grafi_empleados", ">>", nullptr));
        label->setText(QCoreApplication::translate("grafi_empleados", "Nombre", nullptr));
        label_2->setText(QCoreApplication::translate("grafi_empleados", "DNI", nullptr));
        label_3->setText(QCoreApplication::translate("grafi_empleados", "Edad", nullptr));
        label_4->setText(QCoreApplication::translate("grafi_empleados", "Genero", nullptr));
        label_5->setText(QCoreApplication::translate("grafi_empleados", "direcci\303\263n", nullptr));
        pbtn_add->setText(QCoreApplication::translate("grafi_empleados", "ADD", nullptr));
        pbtn_nuevo->setText(QCoreApplication::translate("grafi_empleados", "Nuevo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class grafi_empleados: public Ui_grafi_empleados {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAFI_EMPLEADOS_H
