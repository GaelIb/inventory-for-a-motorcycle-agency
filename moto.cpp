#include "Moto.h"

Moto::Moto(string marca, string modelo, int año, float price, int quantity)
    : Marca(marca), Modelo(modelo), Año(año), Price(price), Quantity(quantity) {}

void Moto::setprice(float price) {
    price = _price;
}

void Moto::setquantity(int quantity) {
    quantity = _quantity;
}

string Moto::getmarca() {
    return marca;
}

string Moto::getmodelo() {
    return modelo;
}

int Moto::getyear() {
    return year;
}

float Moto::getprice() {
    return price;
}

int Moto::getquantity() {
    return quantity;
}

string Moto::getMotoData(){
    string MotoData = "Marca: "+ marca + "\nModelo: " + modelo  + 
    "\nPrice: " + price + "\nQuantity: " + quantity + "\nYear: " + year ;
    return MotoData;
}
