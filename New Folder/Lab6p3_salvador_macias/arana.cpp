
#include "arana.h"

Arana::Arana(int vida, int numeroPatas, bool venenosa)
: Entidad(vida), numeroPatas(numeroPatas), venenosa(venenosa), envenenado(false) {}

Arana::~Arana() {}


int Arana::atacar(int turno) {
    if ((numeroPatas % 2 == 0 && turno % 2 == 0) ||
        (numeroPatas % 2 != 0 && turno % 2 != 0)) {
        if (venenosa) envenenado = true;
        return 1;
    }
    if (envenenado) {
        envenenado = false;
        return 1;
    }
    return 0;
}

void Arana::aplicarVeneno() {
    envenenado = true;
}

int Arana::getNumeroPatas() const { return numeroPatas; }
bool Arana::getVenenosa() const { return venenosa; }


