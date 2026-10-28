#ifndef PAIS_H
#define PAIS_H

#include <string>

class Pais {
private:
    std::string nombre;
    long long poblacion;

public:
    Pais();
    Pais(const std::string& nombre, long long poblacion);
    ~Pais();

    std::string get_nombre() const;
    long long get_poblacion() const;
};

#endif
