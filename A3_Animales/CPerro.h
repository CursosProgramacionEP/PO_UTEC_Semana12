#ifndef CPERRO_H
#define CPERRO_H

#include "CAnimal.h"

class CPerro : public CAnimal {   // "Perro ES UN animal"
public:
    CPerro();
    CPerro(TipoDecimal pPeso);
    virtual ~CPerro();

    void ProduceSonido(std::ostream &os) override;
    void Alimentar(std::ostream &os, CAlimento* pAlimento) override;
};

#endif
