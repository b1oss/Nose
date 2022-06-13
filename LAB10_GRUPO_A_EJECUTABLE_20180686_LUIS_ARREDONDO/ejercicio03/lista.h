#ifndef LISTA_H
#define LISTA_H

#include <iostream>
#include "nodo.h"

using namespace std;

class Lista
{
private:
    Nodo* head;
    int longitud;
public:
    Lista();
    ~Lista();
    int size();
    bool empty();
    void pushBack(int);
    void agregarPos(int);
    void printList();
};

#endif
