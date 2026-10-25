#include "Manzana.h"

Manzana::Manzana() : Alimento("Manzana") {}

Manzana::~Manzana() {}

int Manzana::puntos() const {
    return 1;
}
