#include <string>
#include <vector>
#include "Cliente.h"
#include "Inventario.h"
using namespace std;

#ifndef COMPRA_H
#define COMPRA_H

class Compra{
	
private:
	string Fecha;
	float Total;
	Cliente cliente;
	Moto item;
	Inventario*inventario;
    
public:
	Compra(string fecha, float total, Cliente cliente, Moto item, Inventario* inventario);
    string getFecha();
    float getTotal();
    Moto getItem();
    Cliente getCliente();
    string getCompraData();
};
#endif
