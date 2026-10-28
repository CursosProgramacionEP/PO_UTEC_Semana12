#include "CRaton.h"

using namespace std;

CRaton::CRaton() : CAnimal("Raton", 0.0, 0.10) {}

// La lista de inicializadores invoca al constructor de la superclase.
CRaton::CRaton(TipoDecimal pPeso) : CAnimal("Raton", pPeso, 0.10) {}

CRaton::~CRaton() {}

void CRaton::ProduceSonido(ostream &os) {
    os << m_Nombre << ": \"Squeak\"" << endl;
}

// Los ratones comen verduras y frutas.
void CRaton::Alimentar(ostream &os, CAlimento* pAlimento) {
    if (pAlimento->getTipo() == VERDURA || pAlimento->getTipo() == FRUTA) {
        Comer(os, pAlimento);
    } else {
        Rechazar(os, pAlimento);
    }
}
