#include <iostream>
#include "lista.h"
#include "lista.cpp"
#include "nodo.h"
#include "nodo.cpp"

using namespace std;

int main() {

    Lista lista1;
    int num, elemento;
    cout << "Numero de elementos: "; cin >> num;

    for (int i = 0; i < num; i++)
    {
        cout << "Ingresar numero: "; cin >> elemento;
        lista1.pushBack(elemento);
    }
    lista1.anhadirPrincipio(12);
    lista1.printList();
    
    cout << "La longitud de la lista es " << lista1.size() << endl;
    cin.get();

    return 0;
}
