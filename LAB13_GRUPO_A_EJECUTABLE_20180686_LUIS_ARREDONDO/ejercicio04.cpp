/*
Implemente un programa que maneje un arreglo de estructuras que solicite
nombre, sexo y sueldo de los empleados de una empresa y debe mostrar por
pantalla el menor y mayor sueldo.
*/

#include <iostream>

using namespace std;

struct sueldos
{
    string nombre;
    char sexo;
    double salario;
};

sueldos* lista;

int main() {
    int tamanio;
    cout << "Numero de personas a registrar: "; cin >> tamanio;
    lista = new sueldos[tamanio];

    for (int i = 0; i < tamanio; i++)
    {
        fflush(stdin);
        cout << "Nombres: "; getline(cin,lista[i].nombre);
        cout << "Sexo (f - m): "; cin >> lista[i].sexo;
        cout << "Sueldo: "; cin >> lista[i].salario;
        cout << endl;
    }
    //Imprimiendo el menor y mayor sueldo
    int aux = 0, auxMayor = 0;
    for (int i = 0; i < tamanio; i++)
    {
        if (lista[aux].salario >= lista[i].salario)
        {
            //lista[aux] = lista[i];
            aux = i;
        }
        if (lista[auxMayor].salario <= lista[i].salario)
        {
            auxMayor = i;
        }
    }
    
    cout << "El menor sueldo es de: \n\n" << "Nombre: " << lista[aux].nombre << "\nSexo: " << lista[aux].sexo << "\nSueldo: " << lista[aux].salario << endl;
    cout << endl;
    cout << "\nEl mayor sueldo es de: \n\n" << "Nombre: " << lista[auxMayor].nombre << "\nSexo: " << lista[auxMayor].sexo << "\nSueldo: " << lista[auxMayor].salario << endl;

    delete[] lista;
    
    return 0;
}