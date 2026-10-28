#ifndef CGATO_H
#define CGATO_H

#include "CDomestico.h"

class CGato : public CDomestico {
public:
    CGato();
    CGato(TipoCaracter pGenero, const TipoString& pRegionVive,
         const TipoString& pNombre, TipoDecimal pPeso, TipoEntero pCantAlimento);
    virtual ~CGato();

    void ProduceSonido(std::ostream &os) override;
    void Alimentar(std::ostream &os, CAlimento* pAlimento) override;
};

#endif
