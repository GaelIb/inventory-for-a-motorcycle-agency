#include "Moto.h"

#ifndef MOTO_ELECTRICA_H
#define MOTO_ELECTRICA_H

class Moto_electrica : public Moto {
    private:
        float autonomia;  

    public:
    
        Moto_electrica(string , string , int , float , int , float );
        void setautonomia(float);
        float getautonomia();

};
#endif
