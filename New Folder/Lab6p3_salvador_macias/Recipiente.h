#pragma once


#include "Entidad.h"

enum TipoArma { Aguja, Clavo, Abismo };

class Recipiente : public Entidad {
private:
    int poderAbismal; 
    TipoArma arma;
public:
    Recipiente(int vida, int poderAbismal, TipoArma arma);
    ~Recipiente();

    int getPoderAbismal() const;
    TipoArma getArma() const;

   
    int atacar(int turno) override;
};
