#include "CGallina.h"

using namespace std;

CGallina::CGallina() : CAnimal("Gallina", 0.0, 0.35) {}

// La lista de inicializadores invoca al constructor de la superclase.
CGallina::CGallina(TipoDecimal pPeso) : CAnimal("Gallina", pPeso, 0.35) {}

CGallina::~CGallina() {}

void CGallina::ProduceSonido(ostream &os) {
    os << m_Nombre << ": \"Cluck\"" << endl;
}

// Las gallinas comen todo.
void CGallina::Alimentar(ostream &os, CAlimento* pAlimento) {
    Comer(os, pAlimento);
}
