#include "CMamifero.h"

CMamifero::CMamifero() {}

CMamifero::CMamifero(TipoCaracter pGenero, const TipoString& pRegionVive,
           const TipoString& pNombre, TipoDecimal pPeso, TipoEntero pCantAlimento)
        : CAnimal(pGenero, pRegionVive, pNombre, pPeso, pCantAlimento) {}

CMamifero::~CMamifero() {}
