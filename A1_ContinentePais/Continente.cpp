#include "Continente.h"
#include <iostream>

using namespace std;

Continente::Continente() {
    this->nombre = "sin nombre";
}

Continente::Continente(const string& nombre) {
    this->nombre = nombre;
}

// El pais se copia dentro del vector: a partir de aqui el continente
// tiene su propia copia, independiente del objeto original.
void Continente::agregar_pais(const Pais& pais) {
    paises.push_back(pais);
}

// Devuelve true si lo encontro y lo saco de la lista.
// Al salir del vector la copia se destruye: no hay nada que liberar.
bool Continente::remover_pais(const string& nombre) {
    for (int i = 0; i < (int) paises.size(); i++) {
        if (paises[i].get_nombre() == nombre) {   // objeto por valor: se accede con .
            paises.erase(paises.begin() + i);
            return true;
        }
    }
    return false;
}

void Continente::imprimir_paises() const {
    cout << "Continente: " << nombre
         << " (" << paises.size() << " paises)" << endl;
    if (paises.empty()) {
        cout << "  (sin paises registrados)" << endl;
        return;
    }
    long long total = 0;
    for (int i = 0; i < (int) paises.size(); i++) {
        cout << "  " << paises[i].get_nombre()
             << " -> poblacion: " << paises[i].get_poblacion()
             << " habitantes" << endl;
        total += paises[i].get_poblacion();
    }
    cout << "  Poblacion total: " << total << " habitantes" << endl;
}
