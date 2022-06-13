#include "lista.h"

Lista::Lista() {
    head = nullptr;
    longitud = 0;
}

Lista::~Lista() {}

int Lista::size() {
    return longitud;
}

bool Lista::empty() {
    return (longitud==0);
}

void Lista::pushBack(int num) {
    Nodo* nuevo_nodo = new Nodo(num);
    if (empty())
    {
        head = nuevo_nodo;
    } else
    {
        Nodo* aux = head;
        while (aux->getPtrSig() != nullptr)
        {
            aux = aux->getPtrSig();
        }
        aux->setPtrSig(nuevo_nodo);
    }
    longitud++;
}

void Lista::agregarPos(int num) {
    Nodo* nuevo_nodo = new Nodo(num);
    Nodo* aux = head;
    Nodo* aux1 = aux->getPtrSig();
    int pos;
    cout << "Agregar elemento en la posicion: "; cin >> pos;
    if (longitud < pos)
    {
        cout << "Posicion no accesible" << endl;
    }
    else
    {
        for (int i = 0; i < longitud; i++)
        {
            if (i == pos)
            {
                int elemento;
                cout << "Numero: "; cin >> elemento;
                Nodo* nodo_auxiliar = aux1;
                aux->getPtrSig(num) = aux1->getPtrSig(num);
                longitud++;
            }
            aux = aux->getPtrSig();
            aux1 = aux1->getPtrSig();
        }
        
    }
}

void Lista::printList() {
    Nodo* aux = head;
    for (int i = 0; i < longitud; i++)
    {
        cout << aux->getDato() << " -> ";
        aux = aux->getPtrSig();
    }
    cout << endl;
}
