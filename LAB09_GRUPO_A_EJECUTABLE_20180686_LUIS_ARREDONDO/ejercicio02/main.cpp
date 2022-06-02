/*
Se pide escribir una función utilizando plantillas que tome dos argumentos 
genéricos de tipo entero y flotante que devuelva las cuatro operaciones básicas.
*/
#include <iostream>

using namespace std;

template <class T>

void operaciones(T x, T y) {
    cout << "Resta: " << x - y << endl;
    cout << "Suma: " << x + y << endl;
    cout << "Multiplicacion: " << x * y << endl;
    cout << "Division: " << x / y << endl;
}

int main() {
    operaciones(6, 8);
    cout << endl;
    operaciones(6.3,81.2);
    cout << endl;
    operaciones(-7.4,5.4);
    return 0;
}
