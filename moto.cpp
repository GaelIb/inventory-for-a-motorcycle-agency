#include <iostream>
#include <string>
using namespace std;

class Moto{
private:
	string marca;
	string modelo;
	int a�o;
	double precio;
	
public:
    Moto(const string& marca, const string& modelo, int a�o,   double precio);
    mostrarDetalles(); 
    //ser� para mmostrar los detalles de cada aspecto de la moto
    
	
};
