/*
Escribir un programa que calcule la media de x cantidad números introducidos por el
teclado.
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int cantidad;
    float media = 0;
    cout << "Cantidad de numero a ingresar : "; cin >> cantidad;
    int cadena[cantidad];
    for (int i = 0; i < cantidad; i++)
    {
        cout << "Numero : "; cin >> cadena[i];
        media += cadena[i];
    }
    media = media / cantidad;
    cout << media << endl;
    return 0;
}