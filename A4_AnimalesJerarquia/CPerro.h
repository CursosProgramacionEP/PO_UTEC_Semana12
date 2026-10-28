#ifndef CPERRO_H
#define CPERRO_H

#include "CMamifero.h"

class CPerro : public CMamifero {
public:
    CPerro();
    CPerro(TipoCaracter pGenero, const TipoString& pRegionVive,
         const TipoString& pNombre, TipoDecimal pPeso, TipoEntero pCantAlimento);
    virtual ~CPerro();

    void ProduceSonido(std::ostream &os) override;
    void Alimentar(std::ostream &os, CAlimento* pAlimento) override;
};

#endif
