#include "CGato.h"

using namespace std;

CGato::CGato() {}

CGato::CGato(TipoCaracter pGenero, const TipoString& pRegionVive,
           const TipoString& pNombre, TipoDecimal pPeso, TipoEntero pCantAlimento)
        : CDomestico(pGenero, pRegionVive, pNombre, pPeso, pCantAlimento) {}

CGato::~CGato() {}

void CGato::ProduceSonido(ostream &os) {
    os << m_Nombre << ": \"Miau\"" << endl;
}

// Los gatos comen verduras y carne.
void CGato::Alimentar(ostream &os, CAlimento* pAlimento) {
    if (pAlimento->getTipo() == VERDURA || pAlimento->getTipo() == CARNE) {
        m_Peso += pAlimento->getCantidad() * 0.30;
        os << m_Nombre << " come " << pAlimento->getCantidad()
           << " kg de " << pAlimento->getNombre()
           << " -> peso: " << m_Peso << " kg" << endl;
    } else {
        os << m_Nombre << " no come " << pAlimento->getNombre() << "!" << endl;
    }
}
