#include "CPerro.h"

using namespace std;

CPerro::CPerro() : CAnimal("Perro", 0.0, 0.40) {}

// La lista de inicializadores invoca al constructor de la superclase.
CPerro::CPerro(TipoReal pPeso) : CAnimal("Perro", pPeso, 0.40) {}

CPerro::~CPerro() {}

void CPerro::ProduceSonido(ostream &os) {
    os << m_Nombre << ": \"Guau!\"" << endl;
}

// Los perros comen solo carne.
void CPerro::Alimentar(ostream &os, CAlimento* pAlimento) {
    if (pAlimento->getTipo() == CARNE) {
        Comer(os, pAlimento);
    } else {
        Rechazar(os, pAlimento);
    }
}
