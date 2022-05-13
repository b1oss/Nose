#include <iostream>
#include "figura.h"
using namespace std;

Figura::Figura(int _base, int _altura) {
    base = _base;
    altura = _altura;
}

Figura::~Figura() {
}

void Figura::area() {
    cout << "Area = " << base * altura << endl;
}

void Figura::perimetro() {
    cout << "Perimetro = " << (2 * base) + (2 * altura) << endl;
}
