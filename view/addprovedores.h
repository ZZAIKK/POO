#ifndef ADDPROVEDORES_H
#define ADDPROVEDORES_H

#include "headers/logic_provedor.h"
#include <QWidget>

namespace Ui {
class addProvedores;
}

class addProvedores : public QWidget
{
    Q_OBJECT

public:
    explicit addProvedores(QWidget *parent = nullptr);
    ~addProvedores();

private:
    Ui::addProvedores *ui;
    logicProvedor lp;
    void clean();
private slots:
    void addprov();
};

#endif // ADDPROVEDORES_H
