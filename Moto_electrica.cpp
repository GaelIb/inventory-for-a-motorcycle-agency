#include "Moto_electrica.h"


Moto_electrica::Moto_electrica(string marca, string modelo, int a�o, float price, int quantity, float autonomia)
    : Moto(marca, modelo, a�o, price, quantity), autonomia(autonomia) {}

void Moto::setautonomia(float autonomia) {
    autonomia = _autonomia;
}

float Moto_electrica::getautonomia() const {
    return autonomia;
}

string Moto_electrica::getMoto_electrica  Data(){
    string MotoData = "Marca: "+ marca + "\nModelo: " + modelo  + 
    "\nPrice: " + price + "\nQuantity: " + quantity + "\nYear: " + year + "\nAutonomia: " + autonomia;
    return MotoData;
}
