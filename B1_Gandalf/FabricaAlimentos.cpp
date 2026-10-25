#include "FabricaAlimentos.h"
#include <cctype>
#include "Abarrote.h"
#include "Lembas.h"
#include "Manzana.h"
#include "Melon.h"
#include "HoneyCake.h"
#include "Hongos.h"

using namespace std;

string FabricaAlimentos::a_minusculas(const string& texto) {
    string salida = texto;
    for (int i = 0; i < (int) salida.size(); i++) {
        salida[i] = (char) tolower((unsigned char) salida[i]);
    }
    return salida;
}

// El puntero devuelto es de tipo Alimento*, pero apunta a la subclase:
// al llamar puntos() se ejecuta la version de la subclase (polimorfismo).
Alimento* FabricaAlimentos::crear(const string& nombre) {
    string clave = a_minusculas(nombre);

    if (clave == "abarrote")  return new Abarrote();
    if (clave == "lembas")    return new Lembas();
    if (clave == "manzana")   return new Manzana();
    if (clave == "melon")     return new Melon();
    if (clave == "honeycake") return new HoneyCake();
    if (clave == "hongos")    return new Hongos();

    return new Alimento(nombre);   // todo lo demas: -1 punto
}
