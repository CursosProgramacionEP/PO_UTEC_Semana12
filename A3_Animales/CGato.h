#ifndef CGATO_H
#define CGATO_H

#include "CAnimal.h"

class CGato : public CAnimal {   // "Gato ES UN animal"
public:
    CGato();
    CGato(TipoDecimal pPeso);
    virtual ~CGato();

    void ProduceSonido(std::ostream &os) override;
    void Alimentar(std::ostream &os, CAlimento* pAlimento) override;
};

#endif
