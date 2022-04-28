/*
Elabore un código que solicite un numero entre 100 < x < 999 y muestre el resultado
en binario
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int numero, i = 0;
    string cadena;
    cout << "Ingrese un numero entre 100 y 999 : "; cin >> numero;
    while (numero > 2)
    {
        cadena.at(i++) = numero % 2;
        numero = numero/2;
    }
    for (int j = cadena.size(); j > 0; j--)
    {
        cout << cadena.at(j);
    }
    return 0;
}
