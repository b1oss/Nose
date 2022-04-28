/*
Escribir un programa que pida al usuario una palabra y luego muestre por pantalla
una a una las letras de la palabra introducida empezando por la última
*/
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string palabra;

    cout << "Palabra : "; getline(cin,palabra);
    int size = palabra.size();

    while (size > 0)
    {
        cout << palabra.at(size - 1);
        size--;
    }
    
    return 0;
}
