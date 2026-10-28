#ifndef CANIMAL_H
#define CANIMAL_H

#include <ostream>
#include "Tipos.h"
#include "CAlimento.h"

class CAnimal {
protected:
    TipoCaracter m_Genero;
    TipoString   m_RegionVive;
    TipoString   m_Nombre;
    TipoDecimal  m_Peso;
    TipoEntero   m_CantAlimento;

public:
    CAnimal();
    CAnimal(TipoCaracter pGenero, const TipoString& pRegionVive,
            const TipoString& pNombre, TipoDecimal pPeso, TipoEntero pCantAlimento);
    virtual ~CAnimal();

    TipoCaracter      getGenero() const;
    const TipoString& getRegionVive() const;
    const TipoString& getNombre() const;
    TipoDecimal       getPeso() const;
    TipoEntero        getCantAlimento() const;

    virtual void ProduceSonido(std::ostream &os) = 0;
    virtual void Alimentar(std::ostream &os, CAlimento* pAlimento) = 0;
};

#endif
