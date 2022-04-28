/*
Hacer un programa que lea por teclado un año, calcule y muestre si es bisiesto. Para 
realizar el cálculo utiliza una función llamada bisiesto. La función bisiesto recibe el 
año leído por teclado, comprueba si es o no bisiesto.
*/

#include <iostream>
using namespace std;

void bisiesto(int year)
{
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                cout << "Es biciesto." << endl;
            }
            else
                cout << "No es bisiesto." << endl;
        }
        else
            cout << "Es bisiesto.";
    }
    else
        cout << "No es biciesto." << endl;
}

int main(int argc, char const *argv[])
{
    int year;
    cout << "Ingrese el anio : "; cin >> year;
    bisiesto(year);
    return 0;
}