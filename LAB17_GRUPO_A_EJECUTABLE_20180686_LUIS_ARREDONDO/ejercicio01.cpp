/*
Desarrolle un programa simple de calculadora (operciones basicas) que utilice
clases utilizando plantillas
*/

#include <iostream>
using namespace std;

template <class T>
class Calculadora
{
    T numero1, numero2;
    public:
        Calculadora(T number1, T number2) {
            numero1 = number1;
            numero2 = number2;
        }
        T Suma() {
            return numero1 + numero2;
        }
        T Resta() {
            return numero1 - numero2;
        }
        T Multiplicacion() {
            return numero1 * numero2;
        }
        T Division() {
            return numero1 / numero2;
        }
};

int main() {

    Calculadora<int> numeros(12,6);
    Calculadora<float> numerosF(4.8,5.3);
    
    cout << "Enteros\n" << "--------------------------\n";
    cout << numeros.Suma() << endl;
    cout << numeros.Resta() << endl;
    cout << numeros.Multiplicacion() << endl;
    cout << numeros.Division() << endl;

    cout << "Flotantes\n" << "--------------------------\n";
    cout << numerosF.Suma() << endl;
    cout << numerosF.Resta() << endl;
    cout << numerosF.Multiplicacion() << endl;
    cout << numerosF.Division() << endl;
    return 0;
}