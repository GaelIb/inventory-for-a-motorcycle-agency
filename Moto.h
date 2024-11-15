#include <string>
using namespace std;

#ifndef MOTO_H
#define MOTO_H

class Moto
{
    protected:
        string Marca;
        string Modelo;
        int Año;
        float Price;
        int Quantity;
    public:
        Moto(string,string,int,float,int);
        void setPrice(float);
        void setQuantity(int);
        string getMarca();
        string getModelo();
        int getAño();
        float getPrice();
        int getQuantity();
};
#endif
