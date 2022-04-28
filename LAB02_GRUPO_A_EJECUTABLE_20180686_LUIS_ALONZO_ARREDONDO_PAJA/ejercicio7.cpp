/*
Calcula el promedio de 3 notas para n estudiantes.
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int numeroDeEstudiantes = 4;
    float promedio = 0;
    int notas[numeroDeEstudiantes][3];
    for (int i = 0; i < numeroDeEstudiantes; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Nota : "; cin >> notas[i][j];
        }
        cout << endl;
    }

    cout << "********NOTAS********\n" << endl;

    for (int i = 0; i < numeroDeEstudiantes; i++)
    {
        cout << "Estudiante " << i << "\t = ";
        for (int j = 0; j < 3; j++)
        {
            cout << notas[i][j] << " ";
        }
        cout << endl;
    }

    cout << '\n' << endl;
    cout << "********PROMEDIOS********\n" << endl;

    for (int i = 0; i < numeroDeEstudiantes; i++)
    {
        promedio = 0;
        for (int j = 0; j < 3; j++)
        {
            promedio = promedio + notas[i][j];
        }
        cout << "Promedio de estudiante " << i << " \t= " << promedio / 3 << endl;
    }

    return 0;
}
