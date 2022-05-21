/*
Utilizando punteros a funciones, implemente las funciones:
a. void sumar (int a, int b);
b. void restar (int a, int b);
c. void multiplicar (int a, int b);
d. void dividir (int a, int b);
Cree un vector de punteros a funciones e implemente un programa que permita la
invocación de cada función, pero a través del puntero.
*/

#include <iostream>

using namespace std;

void sumar(int a,int b){
    cout << "Suma: " << a + b << endl;
}

void restar(int a, int b) {
    cout << "Resta: " << a - b << endl;
}

void mult(int a, int b) {
    cout << "Multiplicacion: " << a * b << endl;
}

void dividir(int a, int b) {
    cout << "Division: " << a / b << endl;
}

int main() {
    int opcion, a, b;
    cout << "Elija una opcion:\n1. Sumar\n2. Restar\n3. Multiplicar\n4.Dividir\n: ";
    cin >> opcion;

    void (*funcion)(int,int);
    
    switch (opcion) {
        case 1: 
            funcion = sumar;
            cout << "Ingrese dos numeros: "; cin >> a >> b;
            (funcion)(a,b);
            break;
        case 2:
            funcion = restar;
            cout << "Ingrese dos numeros: "; cin >> a >> b;
            (funcion)(a,b);
            break;
        case 3:
            funcion = mult;
            cout << "Ingrese dos numeros: "; cin >> a >> b;
            (funcion)(a,b);
            break;
        case 4:
            funcion = dividir;
            cout << "Ingrese dos numeros: "; cin >> a >> b;
            (funcion)(a,b);
            break;
        default:
            cout << "Opcion incorrecta." << endl;
            break;
    }

    return 0;
}
