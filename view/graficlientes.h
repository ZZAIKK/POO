#ifndef GRAFICLIENTES_H
#define GRAFICLIENTES_H
#include "headers/logic_cliente.h"
#include <QWidget>

namespace Ui {
class graficlientes;
}

class graficlientes : public QWidget
{
    Q_OBJECT

public:
    explicit graficlientes(QWidget *parent = nullptr);
    ~graficlientes();
private slots:
    void on_pbtn_nuevo_clicked();

    void on_pbtn_add_clicked();

    void on_pbtn_previous_clicked();

    void on_pbtn_next_clicked();
private:
    Ui::graficlientes *ui;
    logic_cliente lp,*ptrLp;
    void clearfields();
    void loadfields(int index);
    int index=0;
};

#endif // GRAFICLIENTES_H
