#ifndef ALIMENTO_H
#define ALIMENTO_H

#include <string>

class Alimento {
protected:
    // protected: las subclases si pueden usarlos, el main no.
    std::string nombre;
    double precio;

public:
    Alimento();
    Alimento(const std::string& nombre, double precio);
    virtual ~Alimento();

    void set_nombre(const std::string& nombre);
    void set_precio(double precio);
    std::string get_nombre() const;
    double get_precio() const;

    // virtual: la subclase puede sobrescribirlas (override).
    virtual std::string tipo() const;
    virtual void imprimir() const;
};

#endif
