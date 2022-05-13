#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <iostream>
#include <string>
using namespace std;

class Estudiante {
private:
    string nombre, cui;
    float nota1, nota2, nota3;
public:
    Estudiante(string,string,float,float,float);
    ~Estudiante();
    void promedio();
};

#endif