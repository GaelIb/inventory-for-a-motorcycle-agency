#include "Inventario.h"
#include <iostream>
using namespace std;

// Add a gasoline motorcycle to the inventory
void Inventario::agregarMotoGasolina(MotoGasolina* moto) {
    motosGasolina.push_back(moto);
    cout << "Gasoline motorcycle added: " << moto->getModelo() << endl;
}

// Add an electric motorcycle to the inventory
void Inventario::agregarMotoElectrica(MotoElectrica* moto) {
    motosElectricas.push_back(moto);
    cout << "Electric motorcycle added: " << moto->getModelo() << endl;
}

// Search for a gasoline motorcycle by model
MotoGasolina* Inventario::buscarMotoGasolina(const string& modelo) {
    for (auto& moto : motosGasolina) {
        if (moto->getModelo() == modelo) {
            return moto;
        }
    }
    return nullptr;
}

// Search for an electric motorcycle by model
MotoElectrica* Inventario::buscarMotoElectrica(const string& modelo) {
    for (auto& moto : motosElectricas) {
        if (moto->getModelo() == modelo) {
            return moto;
        }
    }
    return nullptr;
}

// Sell a gasoline motorcycle by model
bool Inventario::venderMotoGasolina(const string& modelo) {
    for (auto& moto : motosGasolina) {
        if (moto->getModelo() == modelo && moto->getQuantity() > 0) {
            moto->setQuantity(moto->getQuantity() - 1);
            cout << "Sale completed for gasoline motorcycle: " << modelo << endl;
            return true;
        }
    }
    cout << "No stock available for gasoline motorcycle: " << modelo << endl;
    return false;
}

// Sell an electric motorcycle by model
bool Inventario::venderMotoElectrica(const string& modelo) {
    for (auto& moto : motosElectricas) {
        if (moto->getModelo() == modelo && moto->getQuantity() > 0) {
            moto->setQuantity(moto->getQuantity() - 1);
            cout << "Sale completed for electric motorcycle: " << modelo << endl;
            return true;
        }
    }
    cout << "No stock available for electric motorcycle: " << modelo << endl;
    return false;
}

// Display gasoline motorcycles inventory
void Inventario::mostrarInventarioGasolina() const {
    cout << "\n--- Gasoline Motorcycles ---\n";
    for (const auto& moto : motosGasolina) {
        cout << moto->getMotoData() << endl;
    }
}

// Display electric motorcycles inventory
void Inventario::mostrarInventarioElectrica() const {
    cout << "\n--- Electric Motorcycles ---\n";
    for (const auto& moto : motosElectricas) {
        cout << moto->getMotoData() << endl;
    }
}

