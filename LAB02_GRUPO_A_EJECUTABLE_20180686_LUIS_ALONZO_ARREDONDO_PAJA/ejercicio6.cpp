/*
Elabore un programa que calcule la serie de Fibonacci. La serie de Fibonacci es la
sucesión de números: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ... Cada número se calcula sumando
los dos anteriores a él.
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int primero = 0, segundo = 1, repeticiones, suma = 0;
    cout << "Repeticiones : "; cin >> repeticiones;
  
    for(int i = 0; i < repeticiones; i++)
    {  
        if(i <= 1)
        {
            suma = i;
        }
        else
        {
            suma = primero + segundo;
            primero = segundo;
            segundo = suma;  
        }
        cout << suma <<" ";
    }
    
   return 0;
}
