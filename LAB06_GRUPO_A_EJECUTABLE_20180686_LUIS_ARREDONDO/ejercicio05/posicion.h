#ifndef POSICION_H
#define POSICION_H

class Matriz {
private:
    int **cmatriz;
    int buscar;
public:
    Matriz(int**,int);
    ~Matriz();
    void crear();
    void mostrar();
    void search();
    void eliminar();
};

#endif
