#include "CSalvaje.h"

CSalvaje::CSalvaje() {}

CSalvaje::CSalvaje(TipoCaracter pGenero, const TipoString& pRegionVive,
           const TipoString& pNombre, TipoDecimal pPeso, TipoEntero pCantAlimento)
        : CFelino(pGenero, pRegionVive, pNombre, pPeso, pCantAlimento) {}

CSalvaje::~CSalvaje() {}
