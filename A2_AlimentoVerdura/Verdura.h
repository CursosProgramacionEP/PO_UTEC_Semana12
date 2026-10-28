#ifndef VERDURA_H
#define VERDURA_H

#include <string>
#include "Alimento.h"

class Verdura : public Alimento {   // "una verdura ES UN alimento"
private:
    std::string nombre;

public:
    Verdura();
    Verdura(const std::string& nombre, int cantidad);

    void mostrar();
};

#endif
