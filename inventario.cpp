#include "Inventario.h"
#include <algorithm>

void Inventario::agregarMotoElectrica(MotoElectrica moto) {
    motos_electrica.push_back(moto);
}

void Inventario::agregarMotoGasolina(MotoGasolina moto) {
    motos_gasolina.push_back(moto);
}

void Inventario::removerMotoElectrica(string modelo) {
    motos_electrica.erase(remove_if(motos_electrica.begin(), motos_electrica.end(),
        [&](MotoElectrica& moto) { return moto.getModelo() == modelo; }), motos_electrica.end());
}

void Inventario::removerMotoGasolina(string modelo) {
    motos_gasolina.erase(remove_if(motos_gasolina.begin(), motos_gasolina.end(),
        [&](MotoGasolina& moto) { return moto.getModelo() == modelo; }), motos_gasolina.end());
}

bool Inventario::revisarStockMotoElectrica(string modelo) {
    for (auto& moto : motos_electrica) {
        if (moto.getModelo() == modelo) {
            return moto.getQuantity() > 0;
        }
    }
    return false;
}

bool Inventario::revisarStockMotoGasolina(string modelo) {
    for (auto& moto : motos_gasolina) {
        if (moto.getModelo() == modelo) {
            return moto.getQuantity() > 0;
        }
    }
    return false;
}

