/*
Implementar un programa que maneje un arreglo de estructuras para almacenar
los nombres y las fechas de cumpleaños de sus n compañeros. Y debe mostrarse
por pantalla quienes cumplen años en este mes.
*/
#include <iostream>

using namespace std;

struct datos
{
    string nombre;
    int dia;
    int mes;
};

datos *lista;

int main () {

    int tamanio;
    cout << "Numero de personas: "; cin >> tamanio;

    lista = new datos[tamanio];

    //Obtener datos

    for (int i = 0; i < tamanio; i++)
    {
        fflush(stdin);
        cout << "Nombres: "; getline(cin,lista[i].nombre);
        cout << "Dia: "; cin >> lista[i].dia;
        cout << "Mes: "; cin >> lista[i].mes;
        cout << endl;
    }
    
    //Print those who have born in june
    cout << "Cumplen anios en junio";
    int contador = 0;
    for (int i = 0; i < tamanio; i++)
    {
        if (lista[i].mes == 6)
        {
            cout << endl;
            cout << "Nombre: " << lista[i].nombre << "\nCumpleanios: " << lista[i].dia << " - " << lista[i].mes << endl;
            contador++;
        }
    }
    
    if (contador == 0) {
        cout << "\nNadie cumple anios este mes." << endl;
    }

    return 0;
}

/*
    struct Datos p1 = {"Luis",23,11,2001};
    struct Datos p2 = {"Alonzo",12,5,2011};
    struct Datos p3 = {"Leo",14,12,2012};
*/