#ifndef VERDURA_H
#define VERDURA_H

#include "Alimento.h"

class Verdura : public Alimento {   // "una verdura ES UN alimento"
private:
    std::string temporada;
    static int cantidad;            // comun a todos los objetos Verdura

public:
    Verdura();
    Verdura(const std::string& nombre, double precio, const std::string& temporada);
    Verdura(const Verdura& otra);   // para que el contador no se descuadre al copiar
    virtual ~Verdura();

    void set_temporada(const std::string& temporada);
    std::string get_temporada() const;

    std::string tipo() const override;
    void imprimir() const override;

    static int get_cantidad();      // cantidad de objetos Verdura comprados
};

#endif
