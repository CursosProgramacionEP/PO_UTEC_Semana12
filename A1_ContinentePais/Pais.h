#ifndef PAIS_H
#define PAIS_H

#include <string>

class Pais {
private:
    std::string nombre;      // la PPT dice "int nombre": es un error de la diapositiva
    long long poblacion;

public:
    Pais();
    Pais(const std::string& nombre, long long poblacion);
    ~Pais();

    std::string get_nombre() const;
    long long get_poblacion() const;
};

#endif
