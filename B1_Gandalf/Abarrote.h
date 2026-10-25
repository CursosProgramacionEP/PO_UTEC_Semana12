#ifndef ABARROTE_H
#define ABARROTE_H

#include "Alimento.h"

class Abarrote : public Alimento {   // "Abarrote ES UN alimento"
public:
    Abarrote();
    virtual ~Abarrote();

    int puntos() const override;
};

#endif
