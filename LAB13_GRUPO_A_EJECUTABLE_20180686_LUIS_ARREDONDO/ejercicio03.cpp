/*
Implemente un programa que maneje un arreglo de estructuras que solicite el
nombre, edad y talla de 10 jugadores, debe mostrar por pantalla los que son
menores de 20 años y tienen una talla mayor a 1,70 mts de altura.
*/

#include <iostream>

using namespace std;

struct jugadores
{
    string nombre;
    int edad;
    float estatura;
};

jugadores lista[10];

int main() {

    int contador = 0;

    for (int i = 0; i < 10; i++)
    {
        fflush(stdin);
        cout << "Nombre: "; getline(cin,lista[i].nombre);
        cout << "Edad: "; cin >> lista[i].edad;
        cout << "Estatura: "; cin >> lista[i].estatura;
        cout << endl;
    }
    
    cout << "\n\tJugadores que son menores de 20 anios y con estatura mayor a 1.70 m." << endl;

    for (int i = 0; i < 10; i++)
    {
        if (lista[i].edad < 20 && lista[i].estatura > 1.7)
        {
            cout << "Nombre: " << lista[i].nombre << "\nEdad: " << lista[i].edad << "\nEstatura: " << lista[i].estatura << endl;
            contador++;
        }
    }
    
    if (contador == 0)
    {
        cout << "\nNingun jugador cumple con los requisitos." << endl;
    }

    return 0;
}