#ifndef CSALVAJE_H
#define CSALVAJE_H

#include "CFelino.h"

// Abstracta: hereda las virtuales puras de CAnimal y no las implementa.
class CSalvaje : public CFelino {
public:
    CSalvaje();
    CSalvaje(TipoCaracter pGenero, const TipoString& pRegionVive,
         const TipoString& pNombre, TipoDecimal pPeso, TipoEntero pCantAlimento);
    virtual ~CSalvaje();
};

#endif
