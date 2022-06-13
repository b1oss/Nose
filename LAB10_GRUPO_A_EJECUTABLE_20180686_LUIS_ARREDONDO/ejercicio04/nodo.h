#ifndef NODO_H
#define NODO_H

class Nodo {
private:
    int dato;
    Nodo* siguiente;
public:
    Nodo(int);
    ~Nodo();
    void setDato(int);
    int getDato();
    void setPtrSig(Nodo*);
    Nodo* getPtrSig();
};

#endif
