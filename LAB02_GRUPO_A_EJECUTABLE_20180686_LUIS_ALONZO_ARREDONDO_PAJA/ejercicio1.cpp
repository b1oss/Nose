/*
Sumar todos los enteros pares desde 2 hasta 100.
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int suma = 0;
    for (int i = 2; i <= 100; i += 2)
    {
       suma+=i;
    }
     cout << "Total : " << suma << endl; // 2550
    return 0;
}