/********************************************************************************
** Form generated from reading UI file 'registrouser.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTROUSER_H
#define UI_REGISTROUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_registroUser
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *txt_usuario;
    QLabel *label_2;
    QLineEdit *txt_psw;
    QLabel *label_3;
    QLineEdit *txt_pswConfrimar;
    QPushButton *btn_agregar;

    void setupUi(QWidget *registroUser)
    {
        if (registroUser->objectName().isEmpty())
            registroUser->setObjectName("registroUser");
        registroUser->resize(400, 300);
        widget = new QWidget(registroUser);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(50, 30, 232, 130));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        txt_usuario = new QLineEdit(widget);
        txt_usuario->setObjectName("txt_usuario");

        gridLayout->addWidget(txt_usuario, 0, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        txt_psw = new QLineEdit(widget);
        txt_psw->setObjectName("txt_psw");

        gridLayout->addWidget(txt_psw, 1, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        txt_pswConfrimar = new QLineEdit(widget);
        txt_pswConfrimar->setObjectName("txt_pswConfrimar");

        gridLayout->addWidget(txt_pswConfrimar, 2, 1, 1, 1);

        btn_agregar = new QPushButton(widget);
        btn_agregar->setObjectName("btn_agregar");

        gridLayout->addWidget(btn_agregar, 3, 0, 1, 2);


        retranslateUi(registroUser);

        QMetaObject::connectSlotsByName(registroUser);
    } // setupUi

    void retranslateUi(QWidget *registroUser)
    {
        registroUser->setWindowTitle(QCoreApplication::translate("registroUser", "Form", nullptr));
        label->setText(QCoreApplication::translate("registroUser", "Usuario:", nullptr));
        label_2->setText(QCoreApplication::translate("registroUser", "Psw:", nullptr));
        label_3->setText(QCoreApplication::translate("registroUser", "Confirmar:", nullptr));
        btn_agregar->setText(QCoreApplication::translate("registroUser", "Agregar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registroUser: public Ui_registroUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTROUSER_H
