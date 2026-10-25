#include <iostream>
#include "Alimento.h"
#include "Verdura.h"

using namespace std;

int main() {
    cout << "--- 1. Un objeto Alimento y un objeto Verdura ---" << endl;
    Alimento arroz("Arroz", 4.50);
    Verdura brocoli("Brocoli", 6.90, "invierno");

    arroz.imprimir();
    brocoli.imprimir();
    cout << "Verduras compradas: " << Verdura::get_cantidad() << endl;

    cout << "\n--- 2. Copia de Verdura a Alimento (por valor) ---" << endl;
    Alimento copia = brocoli;   // solo se copia la parte Alimento
    copia.imprimir();           // imprime [Alimento]: se perdio la parte Verdura
    cout << "Verduras compradas: " << Verdura::get_cantidad()
         << "  (la copia NO es una Verdura)" << endl;

    cout << "\n--- 3. El mismo caso con punteros ---" << endl;
    Alimento* pAlimento = new Verdura("Zanahoria", 3.20, "todo el anio");
    pAlimento->imprimir();      // imprime [Verdura]: el metodo virtual resuelve en tiempo de ejecucion
    cout << "tipo() a traves del puntero: " << pAlimento->tipo() << endl;
    cout << "Verduras compradas: " << Verdura::get_cantidad() << endl;

    cout << "\n--- 4. Liberando el puntero (destructor virtual) ---" << endl;
    delete pAlimento;           // ~Verdura y luego ~Alimento
    pAlimento = nullptr;
    cout << "Verduras compradas: " << Verdura::get_cantidad() << endl;

    cout << "\n--- Fin del programa ---" << endl;
    return 0;
}
