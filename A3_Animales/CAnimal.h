#ifndef CANIMAL_H
#define CANIMAL_H

#include <ostream>
#include "Tipos.h"
#include "CAlimento.h"

// Clase abstracta: tiene funciones virtuales puras, no se puede instanciar.
class CAnimal {
protected:
    TipoString m_Nombre;
    TipoDecimal   m_Peso;
    TipoDecimal   m_GananciaPorKilo;   // cuanto sube de peso por cada kilo que come

    // Ayudas que las subclases reutilizan al implementar Alimentar().
    void Comer(std::ostream &os, CAlimento* pAlimento);
    void Rechazar(std::ostream &os, CAlimento* pAlimento) const;

public:
    CAnimal();
    CAnimal(const TipoString& pNombre, TipoDecimal pPeso, TipoDecimal pGananciaPorKilo);
    virtual ~CAnimal();

    // Funciones virtuales puras: cada animal las implementa a su manera.
    virtual void ProduceSonido(std::ostream &os) = 0;
    virtual void Alimentar(std::ostream &os, CAlimento* pAlimento) = 0;

    TipoString getNombre() const;
    TipoDecimal   getPeso() const;
    void       imprimir(std::ostream &os) const;
};

#endif
