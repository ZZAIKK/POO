#include "consultproducts.h"
#include "ui_consultproducts.h"

consultProducts::consultProducts(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::consultProducts)
{



    ui->setupUi(this);




    /*vector<product>productos=p.readProducts();
    for(auto i: productos){
        const int row =ui->tableWidget->rowCount();
        ui->tableWidget->insertRow(row);

        int total=i.getStock()*i.getPrice();
        ui->tableWidget->setItem(row,0, new QTableWidgetItem(QString::fromStdString(i.getName())));
        ui->tableWidget->setItem(row,1, new QTableWidgetItem(QString::number(i.getStock())));
        ui->tableWidget->setItem(row,2, new QTableWidgetItem(QString::number(i.getPrice())));
        ui->tableWidget->setItem(row,3,new QTableWidgetItem(QString::number(total)));
    }*/


    for(int i=0;i<ui->tableWidget->currentRow();i++){
        ui->tableWidget->removeRow(i);
    }


    connect(ui->btbn_cargar,SIGNAL(clicked()), this, SLOT(load()));


}

consultProducts::~consultProducts()
{
    delete ui;
}
void consultProducts::on_btbn_cargar_clicked()
{
    vector<product>pr=p.readProducts();
    int h=pr.size();
    ui->tableWidget->setRowCount(h);
    for(int i=0;i<h;i++){
        double total=pr[i].getStock()*pr[i].getPrice();
        ui->tableWidget->setItem(i,0, new QTableWidgetItem(QString::fromStdString(pr[i].getName())));
        ui->tableWidget->setItem(i,1, new QTableWidgetItem(QString::number(pr[i].getStock())));
        ui->tableWidget->setItem(i,2, new QTableWidgetItem(QString::number(pr[i].getPrice())));
        ui->tableWidget->setItem(i,3,new QTableWidgetItem(QString::number(total)));
    }
}

