#include "CAnimal.h"

using namespace std;

CAnimal::CAnimal() {
    m_Nombre          = "sin nombre";
    m_Peso            = 0.0;
    m_GananciaPorKilo = 0.0;
}

CAnimal::CAnimal(const TipoString& pNombre, TipoDecimal pPeso, TipoDecimal pGananciaPorKilo) {
    m_Nombre          = pNombre;
    m_Peso            = pPeso;
    m_GananciaPorKilo = pGananciaPorKilo;
}

// Destructor virtual: obligatorio al usar punteros CAnimal* a subclases.
CAnimal::~CAnimal() {}

// El animal acepta el alimento: sube de peso segun su factor.
void CAnimal::Comer(ostream &os, CAlimento* pAlimento) {
    m_Peso += pAlimento->getCantidad() * m_GananciaPorKilo;
    os << m_Nombre << " come " << pAlimento->getCantidad()
       << " kg de " << pAlimento->getNombre()
       << " (" << pAlimento->getTipoTexto() << ")"
       << " -> peso: " << m_Peso << " kg" << endl;
}

// El animal no acepta ese tipo de alimento: no cambia de peso.
void CAnimal::Rechazar(ostream &os, CAlimento* pAlimento) const {
    os << m_Nombre << " no come " << pAlimento->getNombre() << "!" << endl;
}

TipoString CAnimal::getNombre() const { return m_Nombre; }
TipoDecimal   CAnimal::getPeso() const   { return m_Peso; }

void CAnimal::imprimir(ostream &os) const {
    os << m_Nombre << " | peso: " << m_Peso << " kg" << endl;
}
