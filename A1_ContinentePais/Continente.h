#ifndef CONTINENTE_H
#define CONTINENTE_H

#include <string>
#include <vector>
#include "Pais.h"

class Continente {
private:
    std::string nombre;
    std::vector<Pais*> paises;   // agregacion: los paises existen fuera del continente

public:
    Continente();
    Continente(const std::string& nombre);
    ~Continente();

    void set_nombre(const std::string& nombre);
    std::string get_nombre() const;

    void agregar_pais(Pais* pais);
    Pais* remover_pais(const std::string& nombre);
    Pais* buscar_pais(const std::string& nombre) const;

    int cantidad_paises() const;
    long long poblacion_total() const;

    void imprimir_poblaciones() const;
};

#endif
