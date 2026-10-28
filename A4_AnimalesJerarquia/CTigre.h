#ifndef CTIGRE_H
#define CTIGRE_H

#include "CSalvaje.h"

class CTigre : public CSalvaje {
public:
    CTigre();
    CTigre(TipoCaracter pGenero, const TipoString& pRegionVive,
         const TipoString& pNombre, TipoDecimal pPeso, TipoEntero pCantAlimento);
    virtual ~CTigre();

    void ProduceSonido(std::ostream &os) override;
    void Alimentar(std::ostream &os, CAlimento* pAlimento) override;
};

#endif
