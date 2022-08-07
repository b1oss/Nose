#include <iostream>

using namespace std;

template<int N> 
struct Binario
{
  enum { value = (N % 2) + 10 * Binario<N/2>::value } ;
};

template <>
struct Binario <0>
{
  enum { value = 0 } ;
};

int main ()
{
    int x = Binario<0>::value;
    cout << x << endl;
    int y = Binario<1>::value;
    cout << y << endl;
    int z = Binario<10>::value;
    cout << z << endl;
    return 0;
}
