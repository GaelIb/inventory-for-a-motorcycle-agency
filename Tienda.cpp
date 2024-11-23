#include "Tienda.h"
#include <iostream>
using namespace std;

// Constructor with initializer list
Tienda::Tienda(string _fecha, Inventario& _inventario)
    : fecha(_fecha), total(0.0), inventario(_inventario) {}

// Getter for fecha
string Tienda::getFecha() const {
    return fecha;
}

// Getter for total revenue
float Tienda::getTotal() const {
    return total;
}

// Sell a gasoline motorcycle
bool Tienda::ventaMotoGasolina(const string& modelo) {
    if (inventario.venderMotoGasolina(modelo)) {
        MotoGasolina* moto = inventario.buscarMotoGasolina(modelo);
        if (moto) {
            total += moto->getPrecio(); // Add the price of the sold motorcycle to the total
            cout << "Gasoline motorcycle sold: " << modelo << endl;
            return true;
        }
    }
    cout << "Gasoline motorcycle not available for sale: " << modelo << endl;
    return false;
}

// Sell an electric motorcycle
bool Tienda::ventaMotoElectrica(const string& modelo) {
    if (inventario.venderMotoElectrica(modelo)) {
        MotoElectrica* moto = inventario.buscarMotoElectrica(modelo);
        if (moto) {
            total += moto->getPrecio(); // Add the price of the sold motorcycle to the total
            cout << "Electric motorcycle sold: " << modelo << endl;
            return true;
        }
    }
    cout << "Electric motorcycle not available for sale: " << modelo << endl;
    return false;
}

// Add a gasoline motorcycle to the inventory
void Tienda::compraMotoGasolina(MotoGasolina* moto) {
    inventario.agregarMotoGasolina(moto);
    cout << "Gasoline motorcycle added to inventory: " << moto->getModelo() << endl;
}

// Add an electric motorcycle to the inventory
void Tienda::compraMotoElectrica(MotoElectrica* moto) {
    inventario.agregarMotoElectrica(moto);
    cout << "Electric motorcycle added to inventory: " << moto->getModelo() << endl;
}

// Display the inventory (both gasoline and electric motorcycles)
void Tienda::mostrarInventario() const {
    cout << "\n--- Inventory ---\n";
    cout << "Gasoline Motorcycles:\n";
    inventario.mostrarInventarioGasolina();

    cout << "\nElectric Motorcycles:\n";
    inventario.mostrarInventarioElectrica();
}
