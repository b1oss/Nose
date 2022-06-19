#include <iostream>
#include "cola.h"
#include "cola.cpp"

int main() {
    
    Cola *cola1 = new Cola();
    
    cola1->insertar(5);
    cola1->insertar(10);
    cola1->insertar(50);
    cola1->imprimir();
    cola1->buscar(4);
    cout << endl;
    cola1->buscar(10);
    cout << endl;
	cout << "Extraer elemento de cola: " << cola1->extraer() << endl;
	cola1->imprimir();
    delete cola1;

    return 0;
}
