#ifndef COLA_H
#define COLA_H
#include <iostream>

using namespace std;

class Cola {
private:
    class Nodo {
        public:
            int info;
            Nodo *sig;
    };
    int longitud;
    Nodo *raiz;
    Nodo *fondo;
public:
    Cola();
    ~Cola();
    void insertar(int x);
    int extraer();
    void imprimir();
    void buscar(int y);
    bool empty();
};

#endif
