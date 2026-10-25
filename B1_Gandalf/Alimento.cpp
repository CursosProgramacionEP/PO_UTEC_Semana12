#include "Alimento.h"

using namespace std;

Alimento::Alimento() {
    this->nombre = "desconocido";
}

Alimento::Alimento(const string& nombre) {
    this->nombre = nombre;
}

Alimento::~Alimento() {}

string Alimento::get_nombre() const { return nombre; }

// Todo lo que no esta en la lista del espia: -1 punto.
int Alimento::puntos() const {
    return -1;
}
