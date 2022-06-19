#include "cola.h"
//#include <cstddef>
#include <iostream>

using namespace std;

Cola::Cola() {
    raiz = NULL;
    fondo = NULL;
}

Cola::~Cola() {}

void Cola::insertar(int x) {
    Nodo *nuevo_nodo;
    nuevo_nodo = new Nodo();
    nuevo_nodo->info = x;
    nuevo_nodo->sig = NULL;
    if (empty()) {
        raiz = nuevo_nodo;
        fondo = nuevo_nodo;
    } else {
        fondo->sig = nuevo_nodo;
        fondo = nuevo_nodo;
    }
}

int Cola::extraer() {
    if (!empty()) {
        int informacion = raiz->info;
        Nodo *bor = raiz;
        if (raiz == fondo) {
            raiz = NULL;
            fondo = NULL;
        } else {
            raiz = raiz->sig;
        }
        delete bor;
        return informacion;
    }
    else
        return -1;
}

void Cola::imprimir() {
    Nodo *reco = raiz;
    cout << "\n\tElementos de la cola.\n";
    while (reco != NULL) {
        cout <<  reco->info << " -> ";
        reco = reco->sig;
    }
    cout << endl;
}

void Cola::buscar(int y){
    int contador = 0, contAux = 0;
    Nodo* reco = raiz;
    cout << "Busqueda" << endl;
    while (reco != NULL) {
        if (y == reco->info) {
            cout << "El numero " << y << " se encuentra en : " << contador << endl;
            contAux++;
        }
        contador++;
        reco= reco->sig;     
    }
    if (contAux == 0) {
        cout << "No se encuentra el numero " << y << " en la lista." << endl;
    }
}

bool Cola::empty() {
    if (raiz == NULL) {
        return true;
    }
    else {
        return false;
    }
}
