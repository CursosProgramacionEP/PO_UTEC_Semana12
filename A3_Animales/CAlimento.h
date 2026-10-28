#ifndef CALIMENTO_H
#define CALIMENTO_H

#include "Tipos.h"

class CAlimento {
private:
    TipoString   m_Nombre;
    TipoAlimento m_Tipo;
    TipoDecimal     m_Cantidad;   // en kilos

public:
    CAlimento();
    CAlimento(const TipoString& pNombre, TipoAlimento pTipo, TipoDecimal pCantidad);
    ~CAlimento();

    TipoString   getNombre() const;
    TipoAlimento getTipo() const;
    TipoDecimal     getCantidad() const;
    TipoString   getTipoTexto() const;
};

#endif
