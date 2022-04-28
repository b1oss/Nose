/*
Desarrollar  un  programa,  utilizando  funciones  con  un  tipo  de  retorno,  con  las 
siguientes opciones: 
a. Introducir un valor x entero comprendido entre 0 y 100. 
b. Validar que sea un valor par. 
c. Sumar todos los números impares desde el 0 hasta el valor de x.
*/

#include <iostream>
using namespace std;

bool validar(int numero)
{
    if (numero % 2 == 0)
        return true;
    else
        return false;
}

int suma(int numero)
{
    int aux = 0;
    for (int i = 0; i <= numero; i++)
    {
        if (i % 2 == 1)
            aux = aux + i;
    }
    return aux;
}

int main(int argc, char const *argv[])
{
    int numero;
    cout << "Ingrese un numero : "; cin >> numero;
    if (numero >= 0 && numero <= 100)
    {
        if (validar(numero) == true)
            cout << "La suma de impares es : " << suma(numero) << endl;
        else
            cout << "No es un numero par." << endl;
    }
    else
        cout << "El numero " << numero << " no se encuentra entre 0 y 100.";
    return 0;
}
