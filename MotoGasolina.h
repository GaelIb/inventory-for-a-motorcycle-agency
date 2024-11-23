#ifndef MOTOGASOLINA_H
#define MOTOGASOLINA_H

#include "Moto.h"

class MotoGasolina : public Moto {
private:
    int capacidadGasolina; // Tank capacity
    float kmPerL;          // Fuel efficiency

public:
    // Constructor
    MotoGasolina(string marca, string modelo, int year, float price, int quantity, int capacidadGasolina, float kmPerL);

    // Setters
    void setCapacidadGasolina(int capacidad);
    void setKmPerL(float km);

    // Getters
    int getCapacidadGasolina() const;
    float getKmPerL() const;

    // Display MotoGasolina data
    string getMotoGasolinaData() const;
};

#endif

