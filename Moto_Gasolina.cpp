#include "Moto_Gasolina.h"


Moto_Gasolina::Moto_Gasolina(string _marca, string _modelo, int _year, float _price, int _quantity, int _capacidad_gasolina, float _km_L){
	marca=_marca;
	modelo=_modelo;
	year=_year;
	price=_price;
	quantity=_quantity;
	capacidadGasolina=_capacidad_gasolina;
	kmL=_kmL
		
	
}

void Moto_Gasolina::setcapacidadGasolina(int _capacidad_gasolina) {
    capacidadGasolina = _capacidad_gasolina;
}

void Moto_Gasolina::setkm_L(int _kmL) {
    kmL = _kmL;
}

int Moto_Gasolina::getcapacidadGasolina() const {
    return autonomia;
}

float Moto_gasolina::getkmL() const {
    return kmL;

string Moto_Gasolina::getMoto_Gasolina  Data(){
    string Moto_GasolinaData = "Marca: "+ marca + "\nModelo: " + modelo  + 
    "\nPrice: " + to_string(price) + "\nQuantity: " + to_string(quantity) + "\nYear: " + to_string(year) + "\nCapacidad_Gasolina: " + to_string(capacidadGasolina) + "\nKm_L:" + km_L;
    return Moto_GasolinaData;
}
