/********************************************************************************
** Form generated from reading UI file 'consultproducts.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSULTPRODUCTS_H
#define UI_CONSULTPRODUCTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_consultProducts
{
public:
    QTableWidget *tableWidget;
    QPushButton *btbn_cargar;

    void setupUi(QWidget *consultProducts)
    {
        if (consultProducts->objectName().isEmpty())
            consultProducts->setObjectName("consultProducts");
        consultProducts->resize(446, 363);
        tableWidget = new QTableWidget(consultProducts);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(30, 20, 401, 291));
        btbn_cargar = new QPushButton(consultProducts);
        btbn_cargar->setObjectName("btbn_cargar");
        btbn_cargar->setGeometry(QRect(330, 320, 93, 29));

        retranslateUi(consultProducts);

        QMetaObject::connectSlotsByName(consultProducts);
    } // setupUi

    void retranslateUi(QWidget *consultProducts)
    {
        consultProducts->setWindowTitle(QCoreApplication::translate("consultProducts", "Consultar Productos", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("consultProducts", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("consultProducts", "Stock", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("consultProducts", "Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("consultProducts", "Total", nullptr));
        btbn_cargar->setText(QCoreApplication::translate("consultProducts", "CARGAR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class consultProducts: public Ui_consultProducts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSULTPRODUCTS_H
