#ifndef CAVE_H
#define CAVE_H

#include "CAnimal.h"

// Abstracta: hereda las virtuales puras de CAnimal y no las implementa.
class CAve : public CAnimal {
public:
    CAve();
    CAve(TipoCaracter pGenero, const TipoString& pRegionVive,
         const TipoString& pNombre, TipoDecimal pPeso, TipoEntero pCantAlimento);
    virtual ~CAve();
};

#endif
