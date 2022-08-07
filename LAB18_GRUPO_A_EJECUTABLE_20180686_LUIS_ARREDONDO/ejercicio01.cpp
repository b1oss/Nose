/*
Suma los dígitos de un numero de forma recursiva utilizando metaprogramación.
*/

#include <iostream>

using namespace std;

template <int X>
struct Suma
{
    enum { value = (X % 10) + Suma<X/10>::value };
};

template<>
struct Suma<0>
{
    enum { value = 0} ;
};


int main() {

    int sum = Suma<13421>::value;
    cout << sum << endl;

    return 0;
}
