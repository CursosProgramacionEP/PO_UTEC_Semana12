#include "Verdura.h"
#include <iostream>

using namespace std;

// El atributo static se define una sola vez, fuera de la clase.
int Verdura::cantidad = 0;

Verdura::Verdura() {
    this->temporada = "sin temporada";
    cantidad++;
}

// La lista de inicializadores invoca al constructor de la superclase
// ANTES de inicializar los miembros propios de la subclase.
Verdura::Verdura(const string& nombre, double precio, const string& temporada)
        : Alimento(nombre, precio) {
    this->temporada = temporada;
    cantidad++;
}

Verdura::Verdura(const Verdura& otra) : Alimento(otra) {
    this->temporada = otra.temporada;
    cantidad++;
}

Verdura::~Verdura() {
    cantidad--;
    cout << "  [~Verdura] " << nombre << endl;
}

void Verdura::set_temporada(const string& temporada) { this->temporada = temporada; }
string Verdura::get_temporada() const { return temporada; }

string Verdura::tipo() const {
    return "Verdura";
}

void Verdura::imprimir() const {
    cout << "[" << tipo() << "] " << nombre
         << " | precio: S/ " << precio
         << " | temporada: " << temporada << endl;
}

int Verdura::get_cantidad() {
    return cantidad;
}
