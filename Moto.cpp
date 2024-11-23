#include "Moto.h"

// Constructor with initializer list
Moto::Moto(string _marca, string _modelo, int _year, float _price, int _quantity)
    : marca(_marca), modelo(_modelo), year(_year), price(_price), quantity(_quantity) {}

// Setter for price
void Moto::setPrice(float _price) {
    price = _price;
}

// Setter for quantity
void Moto::setQuantity(int _quantity) {
    quantity = _quantity;
}

// Getter for marca
string Moto::getMarca() const {
    return marca;
}

// Getter for modelo
string Moto::getModelo() const {
    return modelo;
}

// Getter for year
int Moto::getYear() const {
    return year;
}

// Getter for price
float Moto::getPrecio() const {
    return price;
}

// Getter for quantity
int Moto::getQuantity() const {
    return quantity;
}

// Display basic motorcycle data
string Moto::getMotoData() const {
    return "Brand: " + marca + ", Model: " + modelo + ", Year: " + to_string(year) +
           ", Price: $" + to_string(price) + ", Quantity: " + to_string(quantity);
}
