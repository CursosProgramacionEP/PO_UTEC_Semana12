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

    void set_nombre(const std::string& nombre);
    void set_poblacion(long long poblacion);
    std::string get_nombre() const;
    long long get_poblacion() const;

    void imprimir() const;
};

#endif
