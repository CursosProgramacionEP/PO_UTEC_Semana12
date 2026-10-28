#include "Alimento.h"
#include <iostream>

using namespace std;

Alimento::Alimento() {
    this->cantidad = 0;
}

Alimento::Alimento(int cantidad) {
    this->cantidad = cantidad;
}

void Alimento::mostrar() {
    cout << "[Alimento] cantidad: " << cantidad << endl;
}
