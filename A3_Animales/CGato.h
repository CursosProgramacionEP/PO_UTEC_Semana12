#ifndef CGATO_H
#define CGATO_H

#include "CAnimal.h"

class CGato : public CAnimal {   // "Gato ES UN animal"
public:
    CGato();
    CGato(TipoReal pPeso);
    virtual ~CGato();

    void ProduceSonido(std::ostream &os) override;
    void Alimentar(std::ostream &os, CAlimento* pAlimento) override;
};

#endif
