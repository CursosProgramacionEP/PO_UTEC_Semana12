#ifndef CGALLINA_H
#define CGALLINA_H

#include "CAve.h"

class CGallina : public CAve {
public:
    CGallina();
    CGallina(TipoCaracter pGenero, const TipoString& pRegionVive,
         const TipoString& pNombre, TipoDecimal pPeso, TipoEntero pCantAlimento);
    virtual ~CGallina();

    void ProduceSonido(std::ostream &os) override;
    void Alimentar(std::ostream &os, CAlimento* pAlimento) override;
};

#endif
