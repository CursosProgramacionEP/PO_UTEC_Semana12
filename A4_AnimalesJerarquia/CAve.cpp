#include "CAve.h"

CAve::CAve() {}

CAve::CAve(TipoCaracter pGenero, const TipoString& pRegionVive,
           const TipoString& pNombre, TipoDecimal pPeso, TipoEntero pCantAlimento)
        : CAnimal(pGenero, pRegionVive, pNombre, pPeso, pCantAlimento) {}

CAve::~CAve() {}
