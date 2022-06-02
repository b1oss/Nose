/*
Se pide escribir una función utilizando plantillas que tome dos valores genéricos
de tipo char y string (5 veces); char corresponde a una letra y string corresponde
al apellido. El programa debe mostrar por pantalla el siguiente formato de correo
electrónico: char/string@unsa.edu.pe.
*/

#include <iostream>

using namespace std;

template <class T, class S>

void correo(T nombre, S apellido) {
    cout << "Correo: " << nombre << apellido << "@gmail.edu.pe" << endl;
}

int main() {
    int i = 0; 
    char _nombre; 
    string _apellido;
    correo("l","arredondo");
    correo("a","apaza");
    correo("k","vazquez");
    correo("a","sandler");
    correo("e","cardenas");
    cout << endl;
    return 0;
}
