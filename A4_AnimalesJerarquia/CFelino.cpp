#include "CFelino.h"

CFelino::CFelino() {}

CFelino::CFelino(TipoCaracter pGenero, const TipoString& pRegionVive,
           const TipoString& pNombre, TipoDecimal pPeso, TipoEntero pCantAlimento)
        : CMamifero(pGenero, pRegionVive, pNombre, pPeso, pCantAlimento) {}

CFelino::~CFelino() {}
