/*
Escribir un programa que pida al usuario un número entero y muestre por pantalla un
triángulo rectángulo como el de más abajo, de altura el número introducido.
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int cantidad;
    
    cout << "Tamanho de triangulo : "; cin >> cantidad;
    
    for (int i = 0; i < cantidad; i++)
    {
        for (int j = 0; j < cantidad; j++)
        {
            if (i == j || i > j)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}
