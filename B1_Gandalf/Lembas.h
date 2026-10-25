#ifndef LEMBAS_H
#define LEMBAS_H

#include "Alimento.h"

class Lembas : public Alimento {   // "Lembas ES UN alimento"
public:
    Lembas();
    virtual ~Lembas();

    int puntos() const override;
};

#endif
