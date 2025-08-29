#pragma once

#include "Entidad.h"

class Arana : public Entidad {
private:
    int numeroPatas;
    bool venenosa;
    bool envenenado;
public:
    Arana(int vida, int numeroPatas, bool venenosa);
    ~Arana();

 
    int atacar(int turno) override;

    void aplicarVeneno();
};
