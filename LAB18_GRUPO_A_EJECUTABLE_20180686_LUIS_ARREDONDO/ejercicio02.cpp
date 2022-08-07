#include <iostream> 

using namespace std;

template <int N> 
struct Fibonacci 
{ 
    enum 
    { 
        anterior = Fibonacci<N-1>::actual, 
        actual = Fibonacci<N-1>::actual + Fibonacci<N-1>::anterior 
    }; 
}; 
template <> 
struct Fibonacci<1> { 
    enum { anterior = 0, actual = 1 }; 
}; 

template <> 
struct Fibonacci<0> { 
    enum { anterior = 0, actual = 0 }; 
}; 


int main() { 
    cout << Fibonacci<7>::actual << endl; 
    return 0;
}
