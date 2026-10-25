#ifndef HONEYCAKE_H
#define HONEYCAKE_H

#include "Alimento.h"

class HoneyCake : public Alimento {   // "HoneyCake ES UN alimento"
public:
    HoneyCake();
    virtual ~HoneyCake();

    int puntos() const override;
};

#endif
