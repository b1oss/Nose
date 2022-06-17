#include <iostream>

using namespace std;

class Stack {
private:
    int *arreglo;
    int tamanio;
    int ultimo;
public:
    Stack();
    void push(int);
    void pop();
    void buscar(int);
};


Stack::Stack() {
    tamanio = 4;
    arreglo = new int[tamanio];
    ultimo = 0;
}


void Stack::push(int dato) {
    arreglo[++ultimo] = dato;
    cout << arreglo[ultimo] << " ->";
}

void Stack::pop() {
    cout << arreglo[ultimo--] << " ";
}

void Stack::buscar(int num) {
    int x = 0;
    int cont = 0;
    while (x != ultimo) {
        if (arreglo[x] == num) {
            cout << "Coincide en la posicion: " << x  << endl;
            cont++;
        }
        x++;
    }
    if (cont == 0) {
        cout << "No coincide con ninguno." << endl;
    }
}
int main() {
    Stack c1;
    c1.push(10);
    c1.push(15);
    c1.push(20);
    c1.push(25);
    cout << endl;
    /////////////////////////
    c1.buscar(20);
    c1.buscar(5);
    c1.buscar(11);
    c1.pop();
    c1.pop();
    cout << endl;
    return 0;
}
