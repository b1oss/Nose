#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "posicion.h"

using namespace std;

int **cmatriz;

Matriz::Matriz( int _buscar) {
    buscar = _buscar;
}

Matriz::~Matriz() {

}

void crear() {
    cmatriz = new int *[3];
    for(int i = 0; i < 3; i++) {
        cmatriz[i] = new int[3];
    }
    srand(time(NULL));
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cmatriz[i][j] = rand() % 10 + 1;         
        }
    }
}

/*void Matriz::crear() {
    cmatriz = new int *[3];
    for(int i = 0; i < 3; i++) {
        cmatriz[i] = new int[3];
    }
    srand(time(NULL));
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cmatriz[i][j] = rand() % 10 + 1;         
        }
    }
}
*/
void mostrar() {
    for (int i = 0; i < 3; i++) {
        for (int j; j < 3; j++) {
            cout << cmatriz[i][j] << " ";
        }
        cout << endl;
    }
}

/*
void Matriz::mostrar() {
    for (int i = 0; i < 3; i++) {
        for (int j; j < 3; j++) {
            cout << cmatriz[i][j] << " ";
        }
        cout << endl;
    }
}
*/

void Matriz::search() {
    int count = 0, fila, columna;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (cmatriz[i][j] == buscar) {
                count+=1;
                fila = i;
                columna = j;
            }
        }
    }
    if (count != 0) {
        cout << "\nEl numero " << buscar << " se encuentra en la posicion [" << fila << "," << columna << "]\n";
    }
    else {
        cout << "\nEl numero " << buscar << " no coincide con ningun numero del arreglo.\n";
    }
}

void eliminar() {
    for (int i = 0; i < 3; i++) {
        delete [] cmatriz[i];
    }
    delete [] cmatriz;
}

/*void Matriz::eliminar() {
    for (int i = 0; i < 3; i++) {
        delete [] cmatriz[i];
    }
    delete [] cmatriz;
}*/