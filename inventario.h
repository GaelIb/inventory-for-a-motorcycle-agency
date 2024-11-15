#ifndef INVENTARIO_H
#define INVENTARIO_H

#include <vector>
#include "MotoElectrica.h"
#include "MotoGasolina.h"
using namespace std;

class Inventario {
private:
    vector<MotoElectrica> motos_electrica;
    vector<MotoGasolina> motos_gasolina;

public:
    void agregarMotoElectrica(MotoElectrica moto);
    void agregarMotoGasolina(MotoGasolina moto);
    void removerMotoElectrica(string modelo);
    void removerMotoGasolina(string modelo);
    bool revisarStockMotoElectrica(string modelo);
    bool revisarStockMotoGasolina(string modelo);
};

#endif

