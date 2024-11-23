#ifndef MOTOELECTRICA_H
#define MOTOELECTRICA_H

#include "Moto.h"

class MotoElectrica : public Moto {
private:
    float autonomia; // Battery range

public:
    // Constructor
    MotoElectrica(string marca, string modelo, int year, float price, int quantity, float autonomia);

    // Setters
    void setAutonomia(float autonomia);

    // Getters
    float getAutonomia() const;

    // Display MotoElectrica data
    string getMotoElectricaData() const;
};

#endif
