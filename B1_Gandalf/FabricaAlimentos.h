#ifndef FABRICAALIMENTOS_H
#define FABRICAALIMENTOS_H

#include <string>
#include "Alimento.h"

// Convierte el texto de la entrada en el objeto que le corresponde.
// Si el nombre no esta en la lista devuelve un Alimento (todo lo demas).
class FabricaAlimentos {
public:
    static Alimento* crear(const std::string& nombre);

private:
    static std::string a_minusculas(const std::string& texto);
};

#endif
