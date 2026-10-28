#include "CGallina.h"

using namespace std;

CGallina::CGallina() {}

CGallina::CGallina(TipoCaracter pGenero, const TipoString& pRegionVive,
           const TipoString& pNombre, TipoDecimal pPeso, TipoEntero pCantAlimento)
        : CAve(pGenero, pRegionVive, pNombre, pPeso, pCantAlimento) {}

CGallina::~CGallina() {}

void CGallina::ProduceSonido(ostream &os) {
    os << m_Nombre << ": \"Cluck\"" << endl;
}

// Las gallinas comen todo.
void CGallina::Alimentar(ostream &os, CAlimento* pAlimento) {
    if (true) {
        m_Peso += pAlimento->getCantidad() * 0.35;
        os << m_Nombre << " come " << pAlimento->getCantidad()
           << " kg de " << pAlimento->getNombre()
           << " -> peso: " << m_Peso << " kg" << endl;
    } else {
        os << m_Nombre << " no come " << pAlimento->getNombre() << "!" << endl;
    }
}
