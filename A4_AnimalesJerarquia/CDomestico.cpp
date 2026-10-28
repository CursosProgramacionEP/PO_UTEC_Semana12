#include "CDomestico.h"

CDomestico::CDomestico() {}

CDomestico::CDomestico(TipoCaracter pGenero, const TipoString& pRegionVive,
           const TipoString& pNombre, TipoDecimal pPeso, TipoEntero pCantAlimento)
        : CFelino(pGenero, pRegionVive, pNombre, pPeso, pCantAlimento) {}

CDomestico::~CDomestico() {}
