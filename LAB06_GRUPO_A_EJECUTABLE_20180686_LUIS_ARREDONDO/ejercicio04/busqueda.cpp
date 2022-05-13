#include <fstream>
#include <iostream>
#include <istream>
#include <string>
#include "busqueda.h"

using namespace std;

Espacio::Espacio(string _texto) {
    texto = _texto;
}

Espacio::~Espacio() {

}

void Espacio::buscar() {
    ifstream text;
    text.open("cadena.txt");
    getline(text,texto);
    text.close();
}

void Espacio::cambiar() {
    for (int i = 0; i < texto.size(); i++) {
        if (texto.at(i) == ' ') {
            texto.at(i) = '*';
        }
    }
}

void Espacio::mostrar() {
    cout << endl;
    for (int i = 0; i < texto.size(); i++) {
        cout << texto.at(i);
    }
    cout << endl;
}