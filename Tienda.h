#ifndef TIENDA_H
#define TIENDA_H

#include "Inventario.h"
#include <string>

class Tienda {
private:
    string fecha;           // Store's date
    float total;                 // Total revenue
    Inventario inventario;      // Reference to the inventory

public:
    // Constructor
    Tienda(string,float, inventario);

    // Getters
    string getFecha() const;
    float getTotal() const;

    // Methods for handling inventory and sales
    bool ventaMotoGasolina(string modelo);
    bool ventaMotoElectrica(string modelo);
    void compraMotoGasolina(MotoGasolina* moto);
    void compraMotoElectrica(MotoElectrica* moto);
    void mostrarInventario();
};

#endif
