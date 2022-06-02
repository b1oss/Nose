/*
Implemente un programa que haga uso de plantillas para determinar el mínimo y
máximo valor de un arreglo de elementos dado. Debe de existir dos funciones, la
primera que retorne el mayor de los valores y la segunda que retorne el menor de
los valores. Asimismo, en la función main, se hace una prueba de estas funciones,
con arreglos de enteros y flotantes.
int ArrayEntero [5] = {10,7,2, 8, 6};
float ArrayFloat [5] = {12.1, 8.7, 5.6, 8.4, 1.2};
*/

#include <iostream>
#include "cadena.h"

using namespace std;

int main() {
    int cadena1[5] = {10,7,2,8,6};
    float cadena2[5] = {12.1, 8.7, 5.6, 8.4, 1.2};
    //Cadena<int>(cadenaInt);
    Cadena<int> intCadena(cadena1);
    Cadena<float> floatCadena(cadena2);
    cout << "\tResultado int" << endl;
    intCadena.mostrarResultado();
    cout << "\n\tResultado float" << endl;
    floatCadena.mostrarResultado();
    cout << endl;

    return 0;
}
