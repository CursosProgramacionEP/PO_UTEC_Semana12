#ifndef CGALLINA_H
#define CGALLINA_H

#include "CAnimal.h"

class CGallina : public CAnimal {   // "Gallina ES UN animal"
public:
    CGallina();
    CGallina(TipoReal pPeso);
    virtual ~CGallina();

    void ProduceSonido(std::ostream &os) override;
    void Alimentar(std::ostream &os, CAlimento* pAlimento) override;
};

#endif
