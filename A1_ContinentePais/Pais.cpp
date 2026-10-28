#include "Pais.h"
#include <iostream>

using namespace std;

Pais::Pais() {
    this->nombre = "sin nombre";
    this->poblacion = 0;
}

Pais::Pais(const string& nombre, long long poblacion) {
    this->nombre = nombre;
    this->poblacion = poblacion;
}

Pais::~Pais() {}

string Pais::get_nombre() const { return nombre; }
long long Pais::get_poblacion() const { return poblacion; }
