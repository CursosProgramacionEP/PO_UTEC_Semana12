#ifndef HONGOS_H
#define HONGOS_H

#include "Alimento.h"

class Hongos : public Alimento {   // "Hongos ES UN alimento"
public:
    Hongos();
    virtual ~Hongos();

    int puntos() const override;
};

#endif
