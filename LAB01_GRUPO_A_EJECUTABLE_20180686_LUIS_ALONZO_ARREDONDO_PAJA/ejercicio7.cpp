/*
Elabore un algoritmo que lea por teclado dos números enteros y determine si uno es
divisor del otro.
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int numero1, numero2;
    cout << "Ingrese dos numeros : "; cin >> numero1 >> numero2;
    if (numero1 > numero2)
    {
        if (numero1 % numero2 == 0)
            cout << numero2 << " es divisor de " << numero1 << endl;
        else
            cout << numero2 << " no es divisor de " << numero1 << endl;
    }
    
    else if (numero2 > numero1)
    {
        if (numero2 % numero1 == 0)
            cout << numero1 << " es divisor de " << numero2 << endl;
        else
            cout << numero1 << " no es divisor de " << numero2 << endl;
    }
    
    else
        cout << "Ambos numeros son iguales." << endl;

    return 0;
}
