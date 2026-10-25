#ifndef MELON_H
#define MELON_H

#include "Alimento.h"

class Melon : public Alimento {   // "Melon ES UN alimento"
public:
    Melon();
    virtual ~Melon();

    int puntos() const override;
};

#endif
