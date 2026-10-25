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

// El pais avisa cuando se destruye: sirve para comprobar que el
// continente no lo destruye por su cuenta (agregacion).
Pais::~Pais() {
    cout << "Eliminandose el pais " << nombre << endl;
}

void Pais::set_nombre(const string& nombre) { this->nombre = nombre; }
void Pais::set_poblacion(long long poblacion) { this->poblacion = poblacion; }
string Pais::get_nombre() const { return nombre; }
long long Pais::get_poblacion() const { return poblacion; }

void Pais::imprimir() const {
    cout << nombre << " -> poblacion: " << poblacion << " habitantes" << endl;
}
