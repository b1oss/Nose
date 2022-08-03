/*
Definir una clase utilizando plantillas que permita almacenar datos en un arbol
binario. Por el momento solo se insertaran elementos en la estructura. Simule el
proceso de almacenar 100 datos y verifique que la estructura no tenga problemas.
*/
#include <iostream>
#include <cstdlib>
#include <random>

using namespace std;

template <class T>
class Datos
{
    T valor;
    public:
        void Generar() {
            for (int i = 0; i < 100; i++)
            {
                valor = rand() % 100 + 0;
                cout << valor << " ";
            }
            cout << endl;
        }
};

template <>
class Datos<float>
{
    float valor;
public:
    void GenerarF() {
        random_device rd;
        mt19937 gen(rd());
        uniform_real_distribution<> dist(1,100);
        for (int i = 0; i < 100; i++)
        {
            valor = dist(gen);
            cout << valor << " ";
        }
        cout << endl;
    }
};

template <>
class Datos<char>
{
    char caracter;
public:
    void GenerarC() {
        int value;
        char abecedario[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g',
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',
                          'o', 'p', 'q', 'r', 's', 't', 'u',
                          'v', 'w', 'x', 'y', 'z' };
        for (int i = 0; i < 100; i++)
        {
            value = rand() % 25 + 0;
            caracter = abecedario[value];
            cout << caracter << " ";
        }
        cout << endl;
    }
};

int main() {

    Datos<int> dInt;
    Datos<float> dFloat;
    Datos<char> dChar;
    cout << "Random enteros\n";
    dInt.Generar();
    cout << endl;
    cout << "Random floats\n";
    dFloat.GenerarF();
    cout << endl;
    cout << "Random chars\n";
    dChar.GenerarC();
    cout << endl;

    return 0;
}