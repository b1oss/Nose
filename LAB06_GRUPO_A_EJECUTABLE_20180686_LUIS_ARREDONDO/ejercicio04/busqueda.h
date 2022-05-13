#ifndef BUSQUEDA_H
#define BUSQUEDA_H

#include <iostream>
using namespace std;

class Espacio{
private:
    string texto;
public:
    Espacio(string);
    ~Espacio();
    void buscar();
    void cambiar();
    void mostrar();
};

#endif