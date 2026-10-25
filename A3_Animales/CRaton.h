#ifndef CRATON_H
#define CRATON_H

#include "CAnimal.h"

class CRaton : public CAnimal {   // "Raton ES UN animal"
public:
    CRaton();
    CRaton(TipoReal pPeso);
    virtual ~CRaton();

    void ProduceSonido(std::ostream &os) override;
    void Alimentar(std::ostream &os, CAlimento* pAlimento) override;
};

#endif
