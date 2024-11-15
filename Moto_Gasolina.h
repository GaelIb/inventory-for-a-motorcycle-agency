#include "Moto.h"

#ifndef MOTO_GASOLINA_H
#define MOTO_GASOLINA_H

class Moto_gasolina : public Moto {
    private:
        int CapacidadGasolina;  
        float km_L;              
    public:
        Moto_gasolina(string , string , int , float , int , int , float );

        int getCapacidadGasolina() ;
        float getKm_L() ;

        
        string getMotoData();
};

#endif

