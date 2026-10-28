#ifndef CMAMIFERO_H
#define CMAMIFERO_H

#include "CAnimal.h"

// Abstracta: hereda las virtuales puras de CAnimal y no las implementa.
class CMamifero : public CAnimal {
public:
    CMamifero();
    CMamifero(TipoCaracter pGenero, const TipoString& pRegionVive,
         const TipoString& pNombre, TipoDecimal pPeso, TipoEntero pCantAlimento);
    virtual ~CMamifero();
};

#endif
