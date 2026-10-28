#ifndef CALIMENTO_H
#define CALIMENTO_H

#include "Tipos.h"

class CAlimento {
private:
    TipoString   m_Nombre;
    TipoEntero   m_Cantidad;
    TipoAlimento m_Tipo;

public:
    CAlimento(const TipoString& pNombre, TipoEntero pCantidad, TipoAlimento pTipo);
    ~CAlimento();

    TipoEntero   getCantidad() const;
    TipoString   getNombre() const;
    TipoAlimento getTipo() const;
};

#endif
