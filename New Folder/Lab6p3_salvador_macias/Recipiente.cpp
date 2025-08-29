
#include "Recipiente.h"
#include <cmath>

Recipiente::Recipiente(int vida, int poderAbismal, TipoArma arma)
    : Entidad(vida), poderAbismal(poderAbismal), arma(arma) {}

Recipiente::~Recipiente() {}

int Recipiente::getPoderAbismal() const { return poderAbismal; }
TipoArma Recipiente::getArma() const { return arma; }

int Recipiente::atacar(int turno) {
    switch(arma) {
        case Aguja: return floor(0.5 * poderAbismal);
        case Clavo: return poderAbismal;
        case Abismo: return 2 * poderAbismal;
    }
    return 0;
}
