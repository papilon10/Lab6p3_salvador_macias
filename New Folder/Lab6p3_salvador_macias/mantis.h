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
    
    int getPrecision() const;
    int getFilo() const;
    int getHonor() const;
    
    
    int atacar(int turno) override;
};

