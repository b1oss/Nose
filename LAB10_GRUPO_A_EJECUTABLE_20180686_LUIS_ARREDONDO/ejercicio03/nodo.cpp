#include "nodo.h"

Nodo::Nodo(int dato) {
    this->dato = dato;
    this->siguiente = nullptr;
}

Nodo::~Nodo() {}

void Nodo::setDato(int dato) {
    this->dato = dato;
}

int Nodo::getDato() {
    return dato;
}

void Nodo::setPtrSig(Nodo* siguiente) {
    this->siguiente = siguiente;
}


Nodo* Nodo::getPtrSig() {
    return siguiente;
}
