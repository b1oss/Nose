#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

int main() {
    float *arr1, *arr2;

    srand((unsigned int)time(NULL));
    for (int it = 0; it < 1000000; it++) {
        arr1 = new float[5];
        arr2 = new float[5];
        
        cout << "\nIteracion n° " << it + 1 << endl;

        cout << "Primer vector\n";
        //Primero
        for (int i = 0; i < 5; i++) {
            *(arr1 + i) = (float(rand())/float((RAND_MAX)));
            cout << *(arr1 + i) << " ";
        }
        cout << "\nSegundo vector\n";
        //Segundo
        for (int j = 0; j < 5; j++) {
            *(arr2 + j) = (float(rand())/float((RAND_MAX)));
            cout << *(arr2 + j) << " ";
        }
        float sum = 0;
        for (int k = 0; k < 5; k++) {
            sum+=*(arr1 + k) * *(arr2 + k);
        }

        cout << "\nProducto " << it + 1 << " = " << sum << endl;
        delete [] arr1;
        arr1 = NULL;
        delete [] arr2;
        arr2 = NULL;
    }
    
    return 0;
}
