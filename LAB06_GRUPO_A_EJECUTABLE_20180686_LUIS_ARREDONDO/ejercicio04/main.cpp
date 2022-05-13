#include <iostream>
#include "busqueda.h"
#include "busqueda.cpp"

int main() {

    Espacio t1 = Espacio("");
    t1.buscar();
    cout << "\nTexto original.\n";
    t1.mostrar();
    cout << "\nEspacios en blanco llenados.\n";
    t1.cambiar();
    t1.mostrar();

    return 0;
}