#include "CRaton.h"

using namespace std;

CRaton::CRaton() {}

CRaton::CRaton(TipoCaracter pGenero, const TipoString& pRegionVive,
           const TipoString& pNombre, TipoDecimal pPeso, TipoEntero pCantAlimento)
        : CMamifero(pGenero, pRegionVive, pNombre, pPeso, pCantAlimento) {}

CRaton::~CRaton() {}

void CRaton::ProduceSonido(ostream &os) {
    os << m_Nombre << ": \"Squeak\"" << endl;
}

// Los ratones comen verduras y frutas.
void CRaton::Alimentar(ostream &os, CAlimento* pAlimento) {
    if (pAlimento->getTipo() == VERDURA || pAlimento->getTipo() == FRUTA) {
        m_Peso += pAlimento->getCantidad() * 0.10;
        os << m_Nombre << " come " << pAlimento->getCantidad()
           << " kg de " << pAlimento->getNombre()
           << " -> peso: " << m_Peso << " kg" << endl;
    } else {
        os << m_Nombre << " no come " << pAlimento->getNombre() << "!" << endl;
    }
}
