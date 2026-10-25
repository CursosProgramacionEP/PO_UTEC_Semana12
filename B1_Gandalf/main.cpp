#include <iostream>
#include <sstream>
#include <string>
#include "Gandalf.h"
#include "FabricaAlimentos.h"

using namespace std;

int main() {
    cout << "Ingrese los alimentos separados por espacios"
         << " (Enter para usar el ejemplo):" << endl;

    string linea;
    getline(cin, linea);
    if (linea.empty()) {
        linea = "Lembas HoneyCake Manzana Hongos Abarrote Piedra Melon";
        cout << "(ejemplo) " << linea << endl;
    }

    Gandalf gandalf;

    cout << "\n--- Lo que come Gandalf ---" << endl;
    istringstream entrada(linea);
    string nombre;
    while (entrada >> nombre) {
        Alimento* alimento = FabricaAlimentos::crear(nombre);
        gandalf.comer(alimento);
        cout << alimento->get_nombre() << " -> "
             << alimento->puntos() << " punto(s)"
             << " | acumulado: " << gandalf.get_puntos() << endl;
        delete alimento;
    }

    cout << "\n--- Resultado ---" << endl;
    cout << gandalf.get_puntos() << endl;
    cout << gandalf.estado_animo() << endl;

    return 0;
}
