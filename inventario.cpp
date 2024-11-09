#include <iostream>
#include <string>
using namespace std;

class Inventario{
private:
	vector<Moto*>motos;
	vector<Refaccion*>refacciones;
	
	
public:
	agregarMoto(Moto* moto);     // Método para agregar una moto
    agregarRefaccion(Refaccion* refaccion); // Método para agregar una refacción
    eliminarMoto(Moto* moto);    // Método para eliminar una moto
    eliminarRefaccion(Refaccion* refaccion); // Método para eliminar una refacción
    verificarStock();            // Método para verificar el stock
	
	
	
};
