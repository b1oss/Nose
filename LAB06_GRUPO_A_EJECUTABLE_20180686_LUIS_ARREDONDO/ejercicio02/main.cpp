#include <iostream>
#include "estudiante.h"
#include "estudiante.cpp"

using namespace std;

int main() {
    Estudiante e1 = Estudiante("Alonzo","20180686",14,16,12);
    e1.promedio();
    cout << endl;
    Estudiante e2 = Estudiante("Luis","20178272",7,12,5);
    e2.promedio();
    cout << endl;

    return 0;
}