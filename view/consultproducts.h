#ifndef CONSULTPRODUCTS_H
#define CONSULTPRODUCTS_H

#include "headers/logic_product.h"
#include <QWidget>

namespace Ui {
class consultProducts;
}

class consultProducts : public QWidget
{
    Q_OBJECT

public:
    explicit consultProducts(QWidget *parent = nullptr);
    ~consultProducts();

    productDAO p;

private:
    Ui::consultProducts *ui;


private slots:
    void on_btbn_cargar_clicked();
};

#endif // CONSULTPRODUCTS_H
