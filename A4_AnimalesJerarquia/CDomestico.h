#ifndef CDOMESTICO_H
#define CDOMESTICO_H

#include "CFelino.h"

// Abstracta: hereda las virtuales puras de CAnimal y no las implementa.
class CDomestico : public CFelino {
public:
    CDomestico();
    CDomestico(TipoCaracter pGenero, const TipoString& pRegionVive,
         const TipoString& pNombre, TipoDecimal pPeso, TipoEntero pCantAlimento);
    virtual ~CDomestico();
};

#endif
