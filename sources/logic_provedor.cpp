#include "../headers/logic_provedor.h"
#include <QDebug>
logicProvedor::logicProvedor(){}
logicProvedor::~logicProvedor(){}

bool logicProvedor::save(string rs, string n, string t, string e){
    qDebug()<<"esto "<<rs<<n<<t<<e;
    provedores pr(rs,n,t,e);
    provedorDAO dao(pr);
    //provDAO.writeProducts(pr);
dao.writeProducts();
    return true;
}
