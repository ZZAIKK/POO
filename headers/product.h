#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>
using namespace std;
class product{

    string name;
    int stock;
    double price;

public:
    product();
    ~product();
    product(string, int , double);
    string getName();
    int getStock();
    double getPrice();
    void setName(string);
    void setStock(int);
    void setPrice(double);

    string information()const;
};


#endif // PRODUCT_H
