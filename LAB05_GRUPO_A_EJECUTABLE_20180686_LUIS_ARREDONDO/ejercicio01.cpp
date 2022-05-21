/*
Asignar valores a dos variables enteras, intercambie estos valores almacenados
usando solo punteros a enteros.
*/
#include <iostream>
using namespace std;

int main() {
    int *a, *b, temp;
    a = new int;
    b = new int;
    
    cout << "Numeros: "; cin >> *a >> *b;
    cout << "A = " << *a << endl;
    cout << "B = " << *b << endl;
    
    temp = *a;
    *a = *b;
    *b = temp;
    
    cout << "***Cambio***" << endl;
    cout << "A = " << *a << endl;
    cout << "B = " << *b << endl;
    
    delete a;
    a = NULL;
    delete b;
    b = NULL;
    
    return 0;
}
