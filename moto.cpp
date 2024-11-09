#include <iostream>
#include <string>
using namespace std;

class Moto{
private:
	string marca;
	string modelo;
	int año;
	double precio;
	
public:
    Moto(const string& marca, const string& modelo, int año,   double precio);
    mostrarDetalles(); 
    //será para mmostrar los detalles de cada aspecto de la moto
    
	
};
