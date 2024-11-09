#include <iostream>
#include <string>
using namespace std;

class Moto{
private:
	string nombre;
    int cantidad;
    double precio;
	
public:
    Moto(const string& marca, const string& modelo, double precio);
    mostrarDetalles(); 
    //será para mmostrar los detalles de cada aspecto de la moto
    
	
};
