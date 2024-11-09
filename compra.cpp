#include <iostream>
#include <string>
using namespace std;

class Compra{
	
private:
	double total;
	Cliente*cliente;
	vector<Moto*> motos;             // Lista de motos en la compra
    vector<Refaccion*> refacciones;  // Lista de refacciones en la compra
    
public:
	agregarMoto(Moto*moto)
	agregarRefaccion(Refaccion*refacciones)
	double calcularTotal();
};
