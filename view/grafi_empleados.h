#ifndef GRAFI_EMPLEADOS_H
#define GRAFI_EMPLEADOS_H

#include "headers/logic_empleados.h"
#include <QWidget>

namespace Ui {
class grafi_empleados;
}

class grafi_empleados : public QWidget
{
    Q_OBJECT

public:
    explicit grafi_empleados(QWidget *parent = nullptr);
    ~grafi_empleados();

private slots:
    void on_pbtn_nuevo_clicked();

    void on_pbtn_add_clicked();

    void on_pbtn_previous_clicked();

    void on_pbtn_next_clicked();
private:
    Ui::grafi_empleados *ui;
    logic_empleados lp,
        *ptrLp=nullptr;
    void clearfields();
    void loadfields(int index);
    int index=0;
};
#endif // GRAFI_EMPLEADOS_H
