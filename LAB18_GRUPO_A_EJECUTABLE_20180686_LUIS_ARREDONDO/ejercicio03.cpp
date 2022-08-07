/*
Calcula la potencia de un numero de forma recursiva utilizando
metaprogramación.
*/

#include <iostream>

using namespace std;

template <int B, int E>
struct Potencia
{
    enum { value = B * Potencia <B,E - 1>::value };
};

template<int B>
struct Potencia <B,0>
{
    enum { value = 1 };
};

int main() {

    int x = Potencia<3,4>::value;
    cout << x << endl;

    return 0;
}
