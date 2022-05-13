#include <iostream>
#include "posicion.h"
#include "posicion.cpp"

using namespace std;

int main() {
    Matriz n1 = Matriz(0,8);
    n1.crear();
    n1.mostrar();
    //crear();
    //mostrar();
    n1.search();
    //eliminar();
    //mostrar();
    n1.eliminar();
    n1.mostrar();
    return 0;
}
