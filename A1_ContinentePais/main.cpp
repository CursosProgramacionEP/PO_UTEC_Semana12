#include <iostream>
#include "Continente.h"
#include "Pais.h"

using namespace std;

int main() {
    // Los paises se crean aparte del continente: son objetos independientes.
    Pais* peru      = new Pais("Peru", 34000000);
    Pais* brasil    = new Pais("Brasil", 216000000);
    Pais* chile     = new Pais("Chile", 19600000);
    Pais* colombia  = new Pais("Colombia", 52000000);

    Continente sudamerica("Sudamerica");
    sudamerica.agregar_pais(peru);
    sudamerica.agregar_pais(brasil);
    sudamerica.agregar_pais(chile);
    sudamerica.agregar_pais(colombia);

    cout << "--- Paises del continente ---" << endl;
    sudamerica.imprimir_poblaciones();

    cout << "\n--- Se remueve Chile del continente ---" << endl;
    Pais* removido = sudamerica.remover_pais("Chile");
    if (removido != nullptr) {
        cout << "Removido de la lista: ";
        removido->imprimir();
    }
    sudamerica.imprimir_poblaciones();

    // El pais removido sigue existiendo: el continente solo lo agregaba.
    cout << "\nEl objeto Chile sigue existiendo fuera del continente:" << endl;
    chile->imprimir();

    cout << "\n--- Fin del programa ---" << endl;
    delete peru;
    delete brasil;
    delete chile;
    delete colombia;

    return 0;
}
