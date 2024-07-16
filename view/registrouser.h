#ifndef REGISTROUSER_H
#define REGISTROUSER_H

#include "headers/logic_user.h"
#include <QWidget>

namespace Ui {
class registroUser;
}

class registroUser : public QWidget
{
    Q_OBJECT

public:
    explicit registroUser(QWidget *parent = nullptr);
    ~registroUser();
    logic_user l;

private:
    Ui::registroUser *ui;

private slots:
    void btn_agg();
};

#endif // REGISTROUSER_H
