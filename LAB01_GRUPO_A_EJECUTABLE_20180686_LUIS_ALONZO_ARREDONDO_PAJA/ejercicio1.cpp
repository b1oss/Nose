/*
Escriba un código que solicite al usuario ingresar dos números enteros y que muestre
el producto de ambos.
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int numero1, numero2;
    cout << "Escriba dos numeros enteros : "; cin >> numero1 >> numero2;

    cout << "Producto : " << numero1 * numero2 << endl;

    return 0;
}