#ifndef CONTINENTE_H
#define CONTINENTE_H

#include <string>
#include <vector>
#include "Pais.h"

class Continente {
private:
    std::string nombre;
    std::vector<Pais> paises;

public:
    Continente();
    Continente(const std::string& nombre);

    void agregar_pais(const Pais& pais);
    bool remover_pais(const std::string& nombre);
    void imprimir_paises() const;
};

#endif
