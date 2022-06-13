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

void Lista::anhadirPrincipio(int num) {
    Nodo* nuevo_nodo = new Nodo(num);
    Nodo* aux = head;

    if (!head)
    {
        head = nuevo_nodo;
    } else
    {
        nuevo_nodo->getPtrSig() = head;
        head = nuevo_nodo;

        while (aux)
        {
            aux = aux->getPtrSig();
        }
        aux->getPtrSig(nuevo_nodo);
    }
    longitud++;
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
