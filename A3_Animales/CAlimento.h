#ifndef CALIMENTO_H
#define CALIMENTO_H

#include "Tipos.h"

class CAlimento {
private:
    TipoString   m_Nombre;
    TipoAlimento m_Tipo;
    TipoReal     m_Cantidad;   // en kilos

public:
    CAlimento();
    CAlimento(const TipoString& pNombre, TipoAlimento pTipo, TipoReal pCantidad);
    ~CAlimento();

    TipoString   getNombre() const;
    TipoAlimento getTipo() const;
    TipoReal     getCantidad() const;
    TipoString   getTipoTexto() const;
};

#endif
