#include <iostream>
#include "Continente.h"
#include "Pais.h"

using namespace std;

int main() {
    Continente sudamerica("Sudamerica");

    // Cada pais se copia al agregarse: el continente guarda objetos, no punteros.
    sudamerica.agregar_pais(Pais("Peru", 34000000));
    sudamerica.agregar_pais(Pais("Brasil", 216000000));
    sudamerica.agregar_pais(Pais("Chile", 19600000));
    sudamerica.agregar_pais(Pais("Colombia", 52000000));

    cout << "--- Paises del continente ---" << endl;
    sudamerica.imprimir_paises();

    cout << "\n--- Se remueve Chile del continente ---" << endl;
    if (sudamerica.remover_pais("Chile")) {
        cout << "Chile fue removido" << endl;
    } else {
        cout << "Chile no estaba en la lista" << endl;
    }
    sudamerica.imprimir_paises();

    cout << "\n--- Se intenta remover un pais que no esta ---" << endl;
    if (!sudamerica.remover_pais("Bolivia")) {
        cout << "Bolivia no estaba en la lista" << endl;
    }

    cout << "\n--- Fin del programa ---" << endl;
    return 0;   // no hay delete: los paises mueren con el continente
}
