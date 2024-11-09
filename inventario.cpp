#include <iostream>
#include <string>
using namespace std;

class Inventario{
private:
	vector<Moto*>motos;
	vector<Refaccion*>refacciones;
	
	
public:
	agregarMoto(Moto* moto);     // M�todo para agregar una moto
    agregarRefaccion(Refaccion* refaccion); // M�todo para agregar una refacci�n
    eliminarMoto(Moto* moto);    // M�todo para eliminar una moto
    eliminarRefaccion(Refaccion* refaccion); // M�todo para eliminar una refacci�n
    verificarStock();            // M�todo para verificar el stock
	
	
	
};
