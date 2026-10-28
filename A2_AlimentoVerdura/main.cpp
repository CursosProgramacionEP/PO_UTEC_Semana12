#include <iostream>
#include "Alimento.h"
#include "Verdura.h"

using namespace std;

int main() {
    cout << "--- 1. Un objeto Alimento y un objeto Verdura ---" << endl;
    Alimento alimento(10);
    Verdura verdura("Brocoli", 5);

    alimento.mostrar();
    verdura.mostrar();

    cout << "\n--- 2. Copia de Verdura a Alimento (por valor) ---" << endl;
    Alimento copia = verdura;   // solo se copia la parte Alimento
    copia.mostrar();            // se perdio el nombre: ya no es una Verdura

    cout << "\n--- 3. El mismo caso con punteros ---" << endl;
    Alimento* pAlimento = new Verdura("Zanahoria", 3);
    pAlimento->mostrar();       // SIN virtual: llama a Alimento::mostrar()

    cout << "\n--- 4. Llamando al metodo de la subclase ---" << endl;
    Verdura* pVerdura = new Verdura("Espinaca", 7);
    pVerdura->mostrar();        // aqui si entra Verdura::mostrar()

    delete pAlimento;
    delete pVerdura;

    cout << "\n--- Fin del programa ---" << endl;
    return 0;
}
