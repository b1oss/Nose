/*
Construya una función recursiva que convierta un número decimal en una cadena
que represente el valor del número en hexadecimal (base 16) utilizando
metaprogramación.
*/
#include <iostream>

using namespace std;

int convertir(int x) {
    return x % (x/16);
}

int main() {

    while (convertir(18))
    {
        cout << convertir(18) << " ";
    }

    return 0;
}
