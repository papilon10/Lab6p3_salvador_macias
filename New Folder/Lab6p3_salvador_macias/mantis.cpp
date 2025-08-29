
#include "mantis.h"

Mantis::Mantis(int vida, int precision, int filo, int honor)
: Entidad(vida), precision(precision), filo(filo), honor(honor) {}

Mantis::~Mantis() {}

int Mantis::atacar(int turno) {
    bool ataca = false;
    if (precision == 1 && turno % 3 == 0) ataca = true;
    if (precision == 2 && turno % 2 == 0) ataca = true;
    if (precision == 3) ataca = true;
    
    if (!ataca) return 0;
    
    int danio = 2;
    if (vida < (3000 * 0.4)) danio *= honor;
    return danio;
}


int Mantis::getFilo() const { return filo; }
int Mantis::getPrecision() const { return precision; }
int Mantis::getHonor() const { return honor; }

