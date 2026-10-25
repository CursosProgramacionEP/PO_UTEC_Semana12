#include "Hongos.h"

Hongos::Hongos() : Alimento("Hongos") {}

Hongos::~Hongos() {}

int Hongos::puntos() const {
    return -10;
}
