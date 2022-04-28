/*
Hacer  un  programa  que  sin  usar la  función  pow(),  pero  por  medio  de  una  función, 
calcule la potencia de un número (ambos números ingresados por teclado
*/

#include <iostream>
using namespace std;

int potencia(int x, int y)
{
    int result = 1;
    if (y == 0)
        return result;

    else
    {
        for (int i = 0; i < y; i++)
            result = result * x;
    }

    return result;
}

int main(int argc, char const *argv[])
{
    int base, exponente;
    cout << "Base : "; cin >> base;
    cout << "Exponente : "; cin >> exponente;

    cout << potencia(base,exponente) << endl;

    return 0;
}