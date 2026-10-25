#include "CGato.h"

using namespace std;

CGato::CGato() : CAnimal("Gato", 0.0, 0.30) {}

// La lista de inicializadores invoca al constructor de la superclase.
CGato::CGato(TipoReal pPeso) : CAnimal("Gato", pPeso, 0.30) {}

CGato::~CGato() {}

void CGato::ProduceSonido(ostream &os) {
    os << m_Nombre << ": \"Miau\"" << endl;
}

// Los gatos comen verduras y carne.
void CGato::Alimentar(ostream &os, CAlimento* pAlimento) {
    if (pAlimento->getTipo() == VERDURA || pAlimento->getTipo() == CARNE) {
        Comer(os, pAlimento);
    } else {
        Rechazar(os, pAlimento);
    }
}
