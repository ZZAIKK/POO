#ifndef REGISTERPRODUCT_H
#define REGISTERPRODUCT_H

#include "headers/logic_product.h"
#include <QWidget>

namespace Ui {
class registerProduct;
}

class registerProduct : public QWidget
{
    Q_OBJECT

public:
    explicit registerProduct(QWidget *parent = nullptr);
    ~registerProduct();

private:
    Ui::registerProduct *ui;
    logic_product l, *ptrLp=nullptr;
    void clearFields();

    void leadFields(int index);//cargar los campos del producto
    int index=0;
private slots:
    void saveProduct();
    void prev();
    void next();
    void newProduct();

};

#endif // REGISTERPRODUCT_H
