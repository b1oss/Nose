/*
Construya una lista enlazada simple utilizando solo punteros. Añada las funciones de
insertar y eliminar un elemento. En la función insertar se debe asegurar que los
números insertados estén en orden creciente. Simule el proceso con 10000 números
aleatorios sin que el programa falle.
 */

#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

void mostrar(int *lista) {
    for (int i; i < 5; i++) {
        lista[i] = rand()%10 - 1;
    }
    for (int i = 0; i < 5; i++) {
        cout << lista[i] << " ";
    }
    cout << endl;
}

void insertar(int *lista, int *numero) {
    cout << "Que numero quiere insertar: "; 
    cin >> *numero;

    for (int i = 0; i < 6; i++) {
        if (i == 5) {
            lista[i] = *numero;
        }
        else {
            lista[i] = rand()%10 - 1;
        }
    }
    
    cout << endl;
}

void eliminar() {
    
}

int main() {

    int *lista, opcion, *numero;
    
    srand (time(NULL));
    
    numero = new int;
    lista = new int[5];
    cout << "Elija una opción:\n1. Insertar\n2. Eliminar\n: ";
    cin >> opcion;

    switch (opcion) {
        case 1 : 
            cout << "Lista original\n";
            mostrar(lista);
            lista = new int[6];
            cout << "\nLista nueva\n";
            insertar(lista,numero);
            break;
        case 2 : eliminar();
                   break;
        default : cout << "Opcion incorrecta." << endl;
    }
    
    delete [] lista;
    lista = NULL;

    return 0;
}
