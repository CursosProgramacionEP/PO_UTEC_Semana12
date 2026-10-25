#include <iostream>
#include <iomanip>
#include <vector>
#include "CAnimal.h"
#include "CAlimento.h"
#include "CGallina.h"
#include "CRaton.h"
#include "CGato.h"
#include "CPerro.h"
#include "CTigre.h"

using namespace std;

int main() {
    cout << fixed << setprecision(2);

    // CAnimal animal("x", 1.0, 0.1);   // error: CAnimal es una clase abstracta

    // Un solo vector de punteros a la superclase guarda animales distintos.
    vector<CAnimal*> animales;
    animales.push_back(new CGallina(2.00));
    animales.push_back(new CRaton(0.30));
    animales.push_back(new CGato(4.50));
    animales.push_back(new CPerro(12.00));
    animales.push_back(new CTigre(150.00));

    cout << "--- 1. Cada animal pide comida con su propio sonido ---" << endl;
    for (int i = 0; i < (int) animales.size(); i++) {
        animales[i]->ProduceSonido(cout);   // funcion virtual pura implementada en la subclase
    }

    // El mismo plato se le ofrece a todos: cada uno decide si lo come.
    vector<CAlimento*> platos;
    platos.push_back(new CAlimento("lechuga", VERDURA, 2.0));
    platos.push_back(new CAlimento("manzana", FRUTA,   1.0));
    platos.push_back(new CAlimento("pollo",   CARNE,   3.0));

    cout << "\n--- 2. Alimentando a cada animal ---" << endl;
    for (int i = 0; i < (int) animales.size(); i++) {
        cout << "* " << animales[i]->getNombre() << endl;
        for (int j = 0; j < (int) platos.size(); j++) {
            animales[i]->Alimentar(cout, platos[j]);
        }
    }

    cout << "\n--- 3. Peso final ---" << endl;
    for (int i = 0; i < (int) animales.size(); i++) {
        animales[i]->imprimir(cout);
    }

    cout << "\n--- Fin del programa ---" << endl;
    for (int i = 0; i < (int) animales.size(); i++) {
        delete animales[i];   // el destructor virtual llama al de la subclase
    }
    for (int j = 0; j < (int) platos.size(); j++) {
        delete platos[j];
    }

    return 0;
}
