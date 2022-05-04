/*
Escribe un programa, que trabajando mediante funciones, presente un menú al
usuario, mueva las columnas a la derecha o izquierda, asimismo mueva las filas para
arriba o para abajo.
*/

#include <iostream>
using namespace std;

void llenarMatriz(int matriz[10][10], int filas, int columnas)
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << "Numero : "; cin >> matriz[i][j];
        }
    }
}

void mostrarMatriz(int matriz[10][10], int filas, int columnas)
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

void moverFilas(int matriz, int filas, int columnas)
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            
        }    
    }
}

void moverColumnas(int matriz[100][100], int filas, int columnas)
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            
        }
    }
}

int main(int argc, char const *argv[])
{
    int filas, columnas, opcion;
    cout << "Ingrese una opcion : ";
    cout << "1. Mover filas.\n2. Mover columnas.";
    cout << "Filas : "; cin >> filas;
    cout << "Columnas : "; cin >> columnas;
    int matriz[filas][columnas];

    switch (opcion)
    {
    case 1:
        llenarMatriz(matriz,filas,columnas);
        mostrarMatriz(matriz,filas,columnas);
        break;
    case 2:
        break;
    default:
        cout << "No existe esta opcion." << endl;
        break;
    }
    return 0;
}
