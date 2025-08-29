#pragma once

#include <string>
using namespace std;

class Entidad {
protected:
    int vida;
public:
    Entidad(int vida = 100);
     ~Entidad();
    
    
    int getVida() const;
    void setVida(int vida);
    
    
        virtual int atacar(int turno) = 0;
        virtual void recibirDanio(int cantidad);
    
    bool estaVivo() const;
};

