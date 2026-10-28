#include <iostream>
#include <iomanip>
#include <vector>
#include "CAnimal.h"
#include "CAlimento.h"
#include "CGallina.h"
#include "CRaton.h"
#include "CPerro.h"
#include "CGato.h"
#include "CTigre.h"

using namespace std;

int main() {
    cout << fixed << setprecision(2);

    // Ninguna de estas compila: son abstractas.
    // CAnimal a;   CAve b;   CMamifero c;   CFelino d;   CSalvaje e;

    vector<CAnimal*> animales;
    animales.push_back(new CGallina('H', "granja",   "Gallina", 2.00,  0));
    animales.push_back(new CRaton  ('M', "ciudad",   "Raton",   0.30,  0));
    animales.push_back(new CPerro  ('M', "casa",     "Perro",  12.00,  0));
    animales.push_back(new CGato   ('H', "casa",     "Gato",    4.50,  0));
    animales.push_back(new CTigre  ('M', "selva",    "Tigre", 150.00,  0));

    cout << "--- 1. Cada animal pide comida con su propio sonido ---" << endl;
    for (int i = 0; i < (int) animales.size(); i++) {
        animales[i]->ProduceSonido(cout);
    }

    vector<CAlimento*> platos;
    platos.push_back(new CAlimento("lechuga", 2, VERDURA));
    platos.push_back(new CAlimento("manzana", 1, FRUTA));
    platos.push_back(new CAlimento("pollo",   3, CARNE));

    cout << "\n--- 2. Alimentando a cada animal ---" << endl;
    for (int i = 0; i < (int) animales.size(); i++) {
        cout << "* " << animales[i]->getNombre()
             << " (" << animales[i]->getRegionVive() << ")" << endl;
        for (int j = 0; j < (int) platos.size(); j++) {
            animales[i]->Alimentar(cout, platos[j]);
        }
    }

    cout << "\n--- 3. Peso final ---" << endl;
    for (int i = 0; i < (int) animales.size(); i++) {
        cout << animales[i]->getNombre() << ": "
             << animales[i]->getPeso() << " kg" << endl;
    }

    for (int i = 0; i < (int) animales.size(); i++) delete animales[i];
    for (int j = 0; j < (int) platos.size(); j++)   delete platos[j];

    return 0;
}
