#ifndef MANZANA_H
#define MANZANA_H

#include "Alimento.h"

class Manzana : public Alimento {   // "Manzana ES UN alimento"
public:
    Manzana();
    virtual ~Manzana();

    int puntos() const override;
};

#endif
