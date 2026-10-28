#ifndef CFELINO_H
#define CFELINO_H

#include "CMamifero.h"

// Abstracta: hereda las virtuales puras de CAnimal y no las implementa.
class CFelino : public CMamifero {
public:
    CFelino();
    CFelino(TipoCaracter pGenero, const TipoString& pRegionVive,
         const TipoString& pNombre, TipoDecimal pPeso, TipoEntero pCantAlimento);
    virtual ~CFelino();
};

#endif
