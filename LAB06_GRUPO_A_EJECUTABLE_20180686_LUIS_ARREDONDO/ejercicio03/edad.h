#ifndef EDAD_H
#define EDAD_H

#include <iostream>
using namespace std;

class Edad {
private:
    string nombre;
    int mes, dia, anio;
public:
    Edad(string,int,int,int);
    ~Edad();
    void mostrar();
};

#endif
