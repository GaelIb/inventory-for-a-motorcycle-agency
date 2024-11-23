#include "MotoElectrica.h"

// Constructor with initializer list
MotoElectrica::MotoElectrica(string _marca, string _modelo, int _year, float _price, int _quantity, float _autonomia)
    : Moto(_marca, _modelo, _year, _price, _quantity), autonomia(_autonomia) {}

// Setter for autonomia
void MotoElectrica::setAutonomia(float _autonomia) {
    autonomia = _autonomia;
}

// Getter for autonomia
float MotoElectrica::getAutonomia() const {
    return autonomia;
}

// Display data for MotoElectrica
string MotoElectrica::getMotoElectricaData() const {
    return getMotoData() + ", Range: " + to_string(autonomia) + " km";
}
