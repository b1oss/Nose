#ifndef CADENA_H
#define CADENA_H
#include <iostream>

using namespace std;

template <class T>

class Cadena {
    private:
        T cade[5];
    public:
        Cadena(T cad) {
            cade[5] = cad[5];
        }
        void mostrarResultado() {
            cout << "Mayor: " << mayor() << endl;
            cout << "Menor: " << menor() << endl;
        }
        T mayor() {
            T aux = cade[0];
            for (int i = 0; i < 5; i++) {
                if (cade[i] >= aux) {
                    aux = cade[i];
                }
            }
            return aux;
        }
        T menor() {
            T aux = cade[0];
            for (int i = 0; i < 5; i++) {
                if (aux >= cade[i]) {
                    aux = cade[i];
                }
            }
            return aux;
        }
};
/*template <class T>

Cadena<T>::Cadena(T cad) {
    this->cad[5] = cad[5];
}*/
#endif
