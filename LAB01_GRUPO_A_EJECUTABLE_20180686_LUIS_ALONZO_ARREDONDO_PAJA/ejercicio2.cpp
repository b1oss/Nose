/*
Escriba un código que solicite el primer nombre de una persona, el apellido paterno
y el apellido materno. Retornar su correo UNSA generado, el cual consiste de la
primera letra del nombre, el apellido paterno completo, y la primera letra del apellido
materno. (se agrega el dominio de la universidad al final).
*/
#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string nombre, apellidoP, apellidoM;
    cout << "Primer nombre : "; getline(cin,nombre);
    cout << "Apellido paterno : "; getline(cin,apellidoP);
    cout << "Apellido materno : "; getline(cin,apellidoM);
    
    cout << '\n' << nombre.at(0) << apellidoP << apellidoM.at(0) << "@unsa.edu.pe" << endl;

    return 0;
}