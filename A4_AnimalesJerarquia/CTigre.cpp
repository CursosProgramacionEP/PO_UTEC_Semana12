#include "CTigre.h"

using namespace std;

CTigre::CTigre() {}

CTigre::CTigre(TipoCaracter pGenero, const TipoString& pRegionVive,
           const TipoString& pNombre, TipoDecimal pPeso, TipoEntero pCantAlimento)
        : CSalvaje(pGenero, pRegionVive, pNombre, pPeso, pCantAlimento) {}

CTigre::~CTigre() {}

void CTigre::ProduceSonido(ostream &os) {
    os << m_Nombre << ": \"¡¡¡ROAR!!!\"" << endl;
}

// Los tigres comen solo carne.
void CTigre::Alimentar(ostream &os, CAlimento* pAlimento) {
    if (pAlimento->getTipo() == CARNE) {
        m_Peso += pAlimento->getCantidad() * 1.00;
        os << m_Nombre << " come " << pAlimento->getCantidad()
           << " kg de " << pAlimento->getNombre()
           << " -> peso: " << m_Peso << " kg" << endl;
    } else {
        os << m_Nombre << " no come " << pAlimento->getNombre() << "!" << endl;
    }
}
