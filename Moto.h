#include <string>
using namespace std;

#ifndef MOTO_H
#define MOTO_H

class Moto
{
    protected:
        string marca;
        string modelo;
        int year;
        float price;
        int quantity;
    public:
        Moto(string,string,int,float,int);
        void setPrice(float);
        void setQuantity(int);
        string getMarca();
        string getModelo();
        int getYear();
        float getPrice();
        int getQuantity();
        string getMotoData();
};
#endif
