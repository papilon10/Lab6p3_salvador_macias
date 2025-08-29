#include "Entidad.h"

Entidad::Entidad(int vida) {
    if (vida > 3000) this->vida = 3000;
    else this->vida = vida;
}

Entidad::~Entidad() {}

int Entidad::getVida() const {
    return vida;
}

void Entidad::setVida(int v) {
    vida = (v > 3000 ? 3000 : v);
}

void Entidad::recibirDanio(int cantidad) {
    vida -= cantidad;
    if (vida < 0) vida = 0;
}

bool Entidad::estaVivo() const {
    return vida > 0;
}
