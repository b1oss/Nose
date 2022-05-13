#include <iostream>
#include "edad.h"
#include "edad.cpp"

using namespace std;

int main() {
    cout << endl << endl;
    Edad p1 = Edad("Alonzo",11,23,1999);
    p1.mostrar();
    cout << endl;
    
    Edad p2 = Edad("Luis",5,12,2000);
    p2.mostrar();
    cout << endl;
    
    Edad p3 = Edad("Alf",4,10,2018);
    p3.mostrar();
    cout << endl;

    Edad p4 = Edad("DDOS", 5, 11, 1999);
    p4.mostrar();
    cout << endl;

    return 0;
}
