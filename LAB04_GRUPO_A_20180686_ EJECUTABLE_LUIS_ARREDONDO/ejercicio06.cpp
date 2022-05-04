/*
Escribe un programa que pida nueve números enteros y los almacene en una matriz
3x3. Calcula la suma de los números de cada fila y mostrar por pantalla el número de
fila con mayor suma.
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int matriz[3][3];
    int suma = 0, aux = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Numero : "; cin >> matriz[i][j];
        }
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            suma+=matriz[i][j];
        }
        if (suma >= aux)
        {
            aux = suma;
        }
        suma = 0;
    }
    
    cout << "La suma mayor es : " << aux;

    return 0;
}
