#include "Verdura.h"
#include <iostream>

using namespace std;

Verdura::Verdura() {
    this->nombre = "sin nombre";
}

// La lista de inicializadores invoca al constructor de la superclase
// ANTES de inicializar los miembros propios de la subclase.
Verdura::Verdura(const string& nombre, int cantidad) : Alimento(cantidad) {
    this->nombre = nombre;
}

void Verdura::mostrar() {
    cout << "[Verdura] " << nombre << " | cantidad: " << cantidad << endl;
}
