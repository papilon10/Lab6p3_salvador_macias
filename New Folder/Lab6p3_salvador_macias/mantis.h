#pragma once

#include "Entidad.h"

class Mantis : public Entidad {
private:
    int precision; 
    int filo;
    int honor;
public:
    Mantis(int vida, int precision, int filo, int honor);
    ~Mantis();


    int atacar(int turno) override;
};

