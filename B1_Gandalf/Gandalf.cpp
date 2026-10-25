#include "Gandalf.h"

using namespace std;

Gandalf::Gandalf() {
    this->nombre = "Gandalf el Gris";
    this->puntos_felicidad = 0;
}

Gandalf::Gandalf(const string& nombre) {
    this->nombre = nombre;
    this->puntos_felicidad = 0;
}

Gandalf::~Gandalf() {}

// Gandalf no sabe que alimento es: llama a puntos() y la subclase responde.
void Gandalf::comer(Alimento* alimento) {
    if (alimento != nullptr) {
        puntos_felicidad += alimento->puntos();
    }
}

int    Gandalf::get_puntos() const { return puntos_felicidad; }
string Gandalf::get_nombre() const { return nombre; }

string Gandalf::estado_animo() const {
    if (puntos_felicidad < -5)  return "Enojado";
    if (puntos_felicidad <= 0)  return "Triste";
    if (puntos_felicidad <= 15) return "Feliz";
    return "ReFeliz";
}
