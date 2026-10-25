#ifndef CTIGRE_H
#define CTIGRE_H

#include "CAnimal.h"

class CTigre : public CAnimal {   // "Tigre ES UN animal"
public:
    CTigre();
    CTigre(TipoReal pPeso);
    virtual ~CTigre();

    void ProduceSonido(std::ostream &os) override;
    void Alimentar(std::ostream &os, CAlimento* pAlimento) override;
};

#endif
