#include "CTigre.h"

using namespace std;

CTigre::CTigre() : CAnimal("Tigre", 0.0, 1.00) {}

// La lista de inicializadores invoca al constructor de la superclase.
CTigre::CTigre(TipoDecimal pPeso) : CAnimal("Tigre", pPeso, 1.00) {}

CTigre::~CTigre() {}

void CTigre::ProduceSonido(ostream &os) {
    os << m_Nombre << ": \"ROAR !!!\"" << endl;
}

// Los tigres comen solo carne.
void CTigre::Alimentar(ostream &os, CAlimento* pAlimento) {
    if (pAlimento->getTipo() == CARNE) {
        Comer(os, pAlimento);
    } else {
        Rechazar(os, pAlimento);
    }
}
