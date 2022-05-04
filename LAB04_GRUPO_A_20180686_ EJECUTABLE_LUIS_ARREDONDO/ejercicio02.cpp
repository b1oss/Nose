/*
Hacer un array unidimensional que acepte ocho números enteros. Luego le
pregunte al usuario que ingrese un número a buscar, implementar una función que
busque ese número, si lo encuentra, debe retornar un valor de verdaderos, en caso
contrario, retornar falso.
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arreglo[] = {2,32,54,46,21,39,142,92};
    int size = sizeof(arreglo) / sizeof(arreglo[0]);
    int numero, cont = 0;
    cout << "Ingrese un numero : "; cin >> numero;
    for (int i = 0; i < size; i++)
    {
        if (numero == arreglo[i]){
            cout << "Coincide con " << arreglo[i] << endl;
            cont+=1;
        }
    }
    if (cont != 1)
        cout << "No coincide con ningun numero" << endl;

    return 0;
}
