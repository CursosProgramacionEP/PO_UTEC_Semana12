#ifndef ALIMENTO_H
#define ALIMENTO_H

#include <string>

// Superclase: representa "todo lo demas" que Gandalf puede comer (-1 punto).
class Alimento {
protected:
    std::string nombre;

public:
    Alimento();
    Alimento(const std::string& nombre);
    virtual ~Alimento();

    std::string get_nombre() const;

    // virtual: cada alimento conocido sobrescribe sus puntos de felicidad.
    virtual int puntos() const;
};

#endif
