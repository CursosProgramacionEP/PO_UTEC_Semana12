#ifndef ALIMENTO_H
#define ALIMENTO_H

class Alimento {
protected:
    int cantidad;        // protected para que Verdura pueda usarlo

public:
    Alimento();
    Alimento(int cantidad);

    // Sin "virtual", tal como lo dibuja el diagrama.
    // El ejercicio pide observar que pasa al agregarle virtual (ver tarea 7 del README).
    void mostrar();
};

#endif
