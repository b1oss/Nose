/*
    Escribir un programa que genere la tabla de multiplicar de un número introducido por
    el teclado.
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int numero;
    cout << "Numero : "; cin >> numero;

    for (int i = 1; i < 13; i++)
    {
        cout << numero << " * " << i << "\t = \t" << numero * i << endl;
    }

    return 0;
}
