#include "CPerro.h"

using namespace std;

CPerro::CPerro() {}

CPerro::CPerro(TipoCaracter pGenero, const TipoString& pRegionVive,
           const TipoString& pNombre, TipoDecimal pPeso, TipoEntero pCantAlimento)
        : CMamifero(pGenero, pRegionVive, pNombre, pPeso, pCantAlimento) {}

CPerro::~CPerro() {}

void CPerro::ProduceSonido(ostream &os) {
    os << m_Nombre << ": \"¡Guau!\"" << endl;
}

// Los perros comen solo carne.
void CPerro::Alimentar(ostream &os, CAlimento* pAlimento) {
    if (pAlimento->getTipo() == CARNE) {
        m_Peso += pAlimento->getCantidad() * 0.40;
        os << m_Nombre << " come " << pAlimento->getCantidad()
           << " kg de " << pAlimento->getNombre()
           << " -> peso: " << m_Peso << " kg" << endl;
    } else {
        os << m_Nombre << " no come " << pAlimento->getNombre() << "!" << endl;
    }
}
