/********************************************************************************
** Form generated from reading UI file 'registerproduct.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERPRODUCT_H
#define UI_REGISTERPRODUCT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_registerProduct
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_2;
    QPushButton *btn_agregar;
    QLabel *label;
    QLineEdit *txt_unidades;
    QLineEdit *txt_precio;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_previous;
    QPushButton *btn_next;
    QLineEdit *txt_producto;
    QPushButton *btn_new;

    void setupUi(QWidget *registerProduct)
    {
        if (registerProduct->objectName().isEmpty())
            registerProduct->setObjectName("registerProduct");
        registerProduct->resize(279, 237);
        layoutWidget = new QWidget(registerProduct);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 10, 241, 192));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        QFont font;
        font.setFamilies({QString::fromUtf8("Titillium Web")});
        font.setPointSize(13);
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        btn_agregar = new QPushButton(layoutWidget);
        btn_agregar->setObjectName("btn_agregar");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI Semilight")});
        font1.setPointSize(11);
        btn_agregar->setFont(font1);

        gridLayout->addWidget(btn_agregar, 4, 1, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI Semilight")});
        font2.setPointSize(13);
        font2.setWeight(QFont::Medium);
        font2.setItalic(false);
        font2.setUnderline(false);
        font2.setStrikeOut(false);
        font2.setKerning(false);
        label->setFont(font2);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        txt_unidades = new QLineEdit(layoutWidget);
        txt_unidades->setObjectName("txt_unidades");

        gridLayout->addWidget(txt_unidades, 2, 1, 1, 1);

        txt_precio = new QLineEdit(layoutWidget);
        txt_precio->setObjectName("txt_precio");

        gridLayout->addWidget(txt_precio, 3, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btn_previous = new QPushButton(layoutWidget);
        btn_previous->setObjectName("btn_previous");
        btn_previous->setFont(font1);

        horizontalLayout->addWidget(btn_previous);

        btn_next = new QPushButton(layoutWidget);
        btn_next->setObjectName("btn_next");
        btn_next->setFont(font1);

        horizontalLayout->addWidget(btn_next);


        gridLayout->addLayout(horizontalLayout, 0, 1, 1, 1);

        txt_producto = new QLineEdit(layoutWidget);
        txt_producto->setObjectName("txt_producto");

        gridLayout->addWidget(txt_producto, 1, 1, 1, 1);

        btn_new = new QPushButton(layoutWidget);
        btn_new->setObjectName("btn_new");
        btn_new->setFont(font1);

        gridLayout->addWidget(btn_new, 5, 1, 1, 1);


        retranslateUi(registerProduct);

        QMetaObject::connectSlotsByName(registerProduct);
    } // setupUi

    void retranslateUi(QWidget *registerProduct)
    {
        registerProduct->setWindowTitle(QCoreApplication::translate("registerProduct", "REGISTRO DE PRODUCTOS", nullptr));
        label_3->setText(QCoreApplication::translate("registerProduct", "Precio:", nullptr));
        label_2->setText(QCoreApplication::translate("registerProduct", "Unidades:", nullptr));
        btn_agregar->setText(QCoreApplication::translate("registerProduct", "AGREGAR", nullptr));
        label->setText(QCoreApplication::translate("registerProduct", "Producto:", nullptr));
        btn_previous->setText(QCoreApplication::translate("registerProduct", "<<", nullptr));
        btn_next->setText(QCoreApplication::translate("registerProduct", ">>", nullptr));
        btn_new->setText(QCoreApplication::translate("registerProduct", "NUEVO", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registerProduct: public Ui_registerProduct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERPRODUCT_H
