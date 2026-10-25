#include "Continente.h"
#include <iostream>

using namespace std;

Continente::Continente() {
    this->nombre = "sin nombre";
}

Continente::Continente(const string& nombre) {
    this->nombre = nombre;
}

// En una agregacion el continente NO libera los paises:
// cada pais tiene vida propia y lo libera quien lo creo.
Continente::~Continente() {
    cout << "Eliminandose el continente " << nombre << endl;
}

void Continente::set_nombre(const string& nombre) { this->nombre = nombre; }
string Continente::get_nombre() const { return nombre; }

void Continente::agregar_pais(Pais* pais) {
    if (pais != nullptr) {
        paises.push_back(pais);
    }
}

// Saca el pais de la lista y devuelve su puntero: el objeto sigue vivo.
Pais* Continente::remover_pais(const string& nombre) {
    for (int i = 0; i < (int) paises.size(); i++) {
        if (paises[i]->get_nombre() == nombre) {
            Pais* removido = paises[i];
            paises.erase(paises.begin() + i);
            return removido;
        }
    }
    return nullptr;
}

Pais* Continente::buscar_pais(const string& nombre) const {
    for (int i = 0; i < (int) paises.size(); i++) {
        if (paises[i]->get_nombre() == nombre) {
            return paises[i];
        }
    }
    return nullptr;
}

int Continente::cantidad_paises() const {
    return (int) paises.size();
}

long long Continente::poblacion_total() const {
    long long total = 0;
    for (int i = 0; i < (int) paises.size(); i++) {
        total += paises[i]->get_poblacion();
    }
    return total;
}

void Continente::imprimir_poblaciones() const {
    cout << "Continente: " << nombre
         << " (" << paises.size() << " paises)" << endl;
    if (paises.empty()) {
        cout << "  (sin paises registrados)" << endl;
        return;
    }
    for (int i = 0; i < (int) paises.size(); i++) {
        cout << "  ";
        paises[i]->imprimir();
    }
    cout << "  Poblacion total: " << poblacion_total() << " habitantes" << endl;
}
