#ifndef GANDALF_H
#define GANDALF_H

#include <string>
#include "Alimento.h"

class Gandalf {
private:
    std::string nombre;
    int puntos_felicidad;

public:
    Gandalf();
    Gandalf(const std::string& nombre);
    ~Gandalf();

    void comer(Alimento* alimento);

    int get_puntos() const;
    std::string get_nombre() const;
    std::string estado_animo() const;
};

#endif
