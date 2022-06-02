/*
Se pide escribir una función utilizando plantillas que tome tres argumentos
genéricos y devuelva el menor y el máximo de ellos como valor de retorno. La
función debe ser capaz de dar este tipo de resultados.
*/
#include <iostream>

using namespace std;

template <class T>

void myMax(T x, T y, T z) {
    if (x > y && x > z)
    {
        if (y >= z)
            cout << "Mayor: " <<  x << "\nMenor: " << z << endl;
        else
            cout << "Mayor: " << x << "\nMenor: " << y << endl;
    }
    else if (y > x && y > z)
    {
        if (x >= z)
            cout << "Mayor: " <<  y << "\nMenor: " << z << endl;
        else
            cout << "Mayor: " <<  y << "\nMenor: " << x << endl;
    }
    else {
        if (x >= y)
            cout << "Mayor: " <<  z << "\nMenor: " << y << endl;
        else
            cout << "Mayor: " <<  z << "\nMenor: " << x << endl;
    }
}

int main() {

    myMax(3, 7, 5);
    cout << endl;
    myMax(6.5, 7.0, 6.3);
    cout << endl;
    myMax(6.4,6.4,6.4);
    cout << endl;
    myMax('g', 'e', ' ');

    return 0;
}
