#ifndef CRATON_H
#define CRATON_H

#include "CMamifero.h"

class CRaton : public CMamifero {
public:
    CRaton();
    CRaton(TipoCaracter pGenero, const TipoString& pRegionVive,
         const TipoString& pNombre, TipoDecimal pPeso, TipoEntero pCantAlimento);
    virtual ~CRaton();

    void ProduceSonido(std::ostream &os) override;
    void Alimentar(std::ostream &os, CAlimento* pAlimento) override;
};

#endif
