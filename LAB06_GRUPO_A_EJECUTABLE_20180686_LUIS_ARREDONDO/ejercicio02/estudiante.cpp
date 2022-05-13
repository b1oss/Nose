#include <iostream>
#include "estudiante.h"
using namespace std;

Estudiante::Estudiante(string _nombre, string _cui, float _nota1, float _nota2, float _nota3) {
    nombre = _nombre;
    cui = _cui;
    nota1 = _nota1;
    nota2 = _nota2;
    nota3 = _nota3;
}

Estudiante::~Estudiante() {
}

void Estudiante::promedio() {
    float promedio;
    promedio = (nota1 + nota2 + nota3) / 3;
    if (promedio >= 10) {
        cout << "Estudiante : " << nombre << "\nCui : " << cui << "\nPromedio : " << promedio << "\nAprobado" << endl;
    }
    else {
        cout << "Estudiante : " << nombre << "\nCui : " << cui << "\nPromedio : " << promedio << "\nDesaprobado" << endl;
    }
}