#ifndef INVENTARIO_H
#define INVENTARIO_H

#include <vector>
#include "MotoGasolina.h"
#include "MotoElectrica.h"

class Inventario {
private:
    std::vector<MotoGasolina*> motosGasolina; // Vector for gasoline motorcycles
    std::vector<MotoElectrica*> motosElectricas; // Vector for electric motorcycles

public:
    // Adding motorcycles
    void agregarMotoGasolina(MotoGasolina* moto);
    void agregarMotoElectrica(MotoElectrica* moto);

    // Searching motorcycles
    MotoGasolina* buscarMotoGasolina(const std::string& modelo);
    MotoElectrica* buscarMotoElectrica(const std::string& modelo);

    // Selling motorcycles
    bool venderMotoGasolina(const std::string& modelo);
    bool venderMotoElectrica(const std::string& modelo);

    // Displaying inventory
    void mostrarInventarioGasolina() const;
    void mostrarInventarioElectrica() const;

    ~Inventario();
};

#endif

