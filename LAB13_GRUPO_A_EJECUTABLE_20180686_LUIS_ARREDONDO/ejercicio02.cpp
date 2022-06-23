/*
Implementar un programa que maneje un arreglo de estructuras que calcule la
nota final del Ciencia de la Computación. El programa debe permitir el ingreso
de cualquier cantidad de alumnos y para cada alumno, se podrá ingresar nombre,
grupo, nota de la primera fase, segunda fase, tercera fase y proyecto final. El
porcentaje de cada ítem es 15%, 20%, 25% y 40% respectivamente.
*/

#include <iostream>

using namespace std;

struct notas
{
    string nombres;
    float nota1, nota2, nota3, nota4;
};
notas* arreglo;

int main() {
    
    int tamanio;
    cout << "Tamanio de cadena: "; cin >> tamanio;
    
    arreglo = new notas[tamanio];
    
    for (int i = 0; i < tamanio; i++)
    {
        fflush(stdin);
        cout << "Nombre: "; getline(cin,arreglo[i].nombres);
        cout << "Nota 1: "; cin >> arreglo[i].nota1;
        cout << "Nota 2: "; cin >> arreglo[i].nota2;
        cout << "Nota 3: "; cin >> arreglo[i].nota3;
        cout << "Nota 4: "; cin >> arreglo[i].nota4;
        cout << endl;
    }

    //imprimir promedios
    cout << "\tPROMEDIOS" << endl;

    float promedio;
    for (int i = 0; i < tamanio; i++)
    {
        promedio = ((arreglo[i].nota1)*0.15) + ((arreglo[i].nota2)*0.2) + ((arreglo[i].nota3)*0.25) + ((arreglo[i].nota4)*0.40);
        cout << "Nombres: " << arreglo[i].nombres << "\nNota 1: " << arreglo[i].nota1 << "\nNota 2: " << arreglo[i].nota2 << "\nNota 3: " << arreglo[i].nota3 << "\nNota 4: " << arreglo[i].nota4 << "\nPromedio: " << promedio << "\n\n";
        promedio = 0;
    }
    delete arreglo;
    return 0;
}
/*
void recibir(notas* arr, string name, float grade1, float grade2, float grade3, float grade4) {
    int tamanio;
    cout << "Tamanio de cadena: "; cin >> tamanio;
    arr = new notas[tamanio];
    for (int i = 0; i < tamanio; i++)
    {
        fflush(stdin);
        cout << "Nombre: "; getline(cin,name);
        cout << "Nota 1: "; cin >> grade1;
        cout << "Nota 2: "; cin >> grade2;
        cout << "Nota 3: "; cin >> grade3;
        cout << "Nota 4: "; cin >> grade4;
    }
}

void imprimir(notas* arr) {
    int tam = sizeof(arr) / sizeof(arr[0]);
    float promedio;
    for (int i = 0; i < tam; i++)
    {
        promedio = ((arr[i].nota1)*0.15) + ((arr[i].nota2)*0.2) + ((arr[i].nota3)*0.25) + ((arr[i].nota4)*0.40);
        cout << "Nombres: " << arr[i].nombres << "\nNota 1: " << arr[i].nota1 << "\nNota 2: " << arr[i].nota2 << "\nNota 3: " << arr[i].nota3 << "\nNota 4: " << arr[i].nota4 << "\nPromedio: " << promedio << "\n\n";
        promedio = 0;
    }
}*/