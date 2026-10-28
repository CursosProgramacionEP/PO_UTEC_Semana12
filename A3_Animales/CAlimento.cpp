#include "CAlimento.h"

using namespace std;

CAlimento::CAlimento() {
    m_Nombre   = "sin nombre";
    m_Tipo     = VERDURA;
    m_Cantidad = 0.0;
}

CAlimento::CAlimento(const TipoString& pNombre, TipoAlimento pTipo, TipoDecimal pCantidad) {
    m_Nombre   = pNombre;
    m_Tipo     = pTipo;
    m_Cantidad = pCantidad;
}

CAlimento::~CAlimento() {}

TipoString   CAlimento::getNombre() const   { return m_Nombre; }
TipoAlimento CAlimento::getTipo() const     { return m_Tipo; }
TipoDecimal     CAlimento::getCantidad() const { return m_Cantidad; }

TipoString CAlimento::getTipoTexto() const {
    switch (m_Tipo) {
        case VERDURA: return "verdura";
        case FRUTA:   return "fruta";
        case CARNE:   return "carne";
    }
    return "desconocido";
}
