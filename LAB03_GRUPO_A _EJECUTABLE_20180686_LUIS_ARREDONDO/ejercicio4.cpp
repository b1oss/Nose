/*
Hacer un programa que desarrolle una función, que genere en pantalla  el listado de 
números primos ubicados entre 1 hasta un numero x (x es ingresado por teclado).
*/

#include <iostream>
using namespace std;

void primos(int numero)
{
    int aux = 0;
    for (int i = 2; i <= numero; i++)
    {
        for (int j = 1; j <= numero; j++)
        {
            if (i % j == 0)
                aux++;
        }
        if (aux <= 2)
            cout << i << " ";
        aux = 0;
    }
}

int main(int argc, char const *argv[])
{
    int x;
    cout << "Ingrese un numero : "; cin >> x;
    
    if (x == 1)
        cout << "El numero 1 no es un numero primo.";

    else if (x == 2)
    {
        cout << "2 es un numero primo."<< endl;
    }

    else
    {
        cout << "Numeros primos : ";
        primos(x);
        cout << endl;
    }

    return 0;
}
