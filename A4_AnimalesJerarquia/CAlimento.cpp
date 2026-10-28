#include "CAlimento.h"

using namespace std;

CAlimento::CAlimento(const TipoString& pNombre, TipoEntero pCantidad, TipoAlimento pTipo) {
    m_Nombre   = pNombre;
    m_Cantidad = pCantidad;
    m_Tipo     = pTipo;
}

CAlimento::~CAlimento() {}

TipoEntero   CAlimento::getCantidad() const { return m_Cantidad; }
TipoString   CAlimento::getNombre() const   { return m_Nombre; }
TipoAlimento CAlimento::getTipo() const     { return m_Tipo; }
