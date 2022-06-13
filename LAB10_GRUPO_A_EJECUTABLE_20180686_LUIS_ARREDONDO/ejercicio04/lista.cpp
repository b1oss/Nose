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

void Lista::eliminarUlt() {
    Nodo* aux = head;
    Nodo* aux2 = aux->getPtrSig();
    int pos = longitud-1;
    for (int i = 0; i < longitud; i++)
    {
        if (i == pos)
        {
            Nodo *nodo_aux = aux2;
            aux->getPtrSig() = aux2->getPtrSig();
            delete nodo_aux;
            longitud--;
        }
        aux = aux->getPtrSig();
        aux2 = aux2->getPtrSig();
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
