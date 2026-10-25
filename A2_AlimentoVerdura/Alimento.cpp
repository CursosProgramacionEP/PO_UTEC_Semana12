#include "Alimento.h"
#include <iostream>

using namespace std;

Alimento::Alimento() {
    this->nombre = "sin nombre";
    this->precio = 0.0;
}

Alimento::Alimento(const string& nombre, double precio) {
    this->nombre = nombre;
    this->precio = precio;
}

// Destructor virtual: al liberar un Verdura* guardado en un Alimento*
// se invoca primero el destructor de Verdura y luego este.
Alimento::~Alimento() {
    cout << "  [~Alimento] " << nombre << endl;
}

void Alimento::set_nombre(const string& nombre) { this->nombre = nombre; }
void Alimento::set_precio(double precio) { this->precio = precio; }
string Alimento::get_nombre() const { return nombre; }
double Alimento::get_precio() const { return precio; }

string Alimento::tipo() const {
    return "Alimento";
}

void Alimento::imprimir() const {
    cout << "[" << tipo() << "] " << nombre
         << " | precio: S/ " << precio << endl;
}
