#include "MotoGasolina.h"

// Constructor with initializer list
MotoGasolina::MotoGasolina(string _marca, string _modelo, int _year, float _price, int _quantity, int _capacidadGasolina, float _kmPerL)
    : Moto(_marca, _modelo, _year, _price, _quantity), capacidadGasolina(_capacidadGasolina), kmPerL(_kmPerL) {}

// Setter for capacidadGasolina
void MotoGasolina::setCapacidadGasolina(int _capacidadGasolina) {
    capacidadGasolina = _capacidadGasolina;
}

// Setter for kmPerL
void MotoGasolina::setKmPerL(float _kmPerL) {
    kmPerL = _kmPerL;
}

// Getter for capacidadGasolina
int MotoGasolina::getCapacidadGasolina() const {
    return capacidadGasolina;
}

// Getter for kmPerL
float MotoGasolina::getKmPerL() const {
    return kmPerL;
}

// Display data for MotoGasolina
string MotoGasolina::getMotoGasolinaData() const {
    return getMotoData() + ", Tank Capacity: " + to_string(capacidadGasolina) + 
           " L, Fuel Efficiency: " + to_string(kmPerL) + " km/L";
}
