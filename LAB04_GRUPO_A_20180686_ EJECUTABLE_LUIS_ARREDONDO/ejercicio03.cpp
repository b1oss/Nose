/*
Hacer un array 5x3 que acepte números enteros ingresados por el usuario. Al final,
debe mostrar la suma de todos los números que estén en una fila par.
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int matriz[5][3];
    int suma = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Numero : "; cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i % 2 == 0)
            {
                suma+=matriz[i][j];
            }
        }
        if (i % 2 == 0)
        {
            cout << "Suma fila " << i << " : " << suma << endl;
        }
        suma = 0;
    }

    return 0;
}
