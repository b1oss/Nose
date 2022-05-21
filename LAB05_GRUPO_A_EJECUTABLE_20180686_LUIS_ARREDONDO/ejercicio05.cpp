/*
Implemente su propia función de concatenación de cadenas de texto especial (¡no es
la función ordinaria de concatenación!), recibirá como parámetro dos punteros de
caracteres y tendrá que asignar el contenido del segundo puntero al INICIO del primer
puntero. La función no retorna ningún valor.
*/
#include <iostream>
using namespace std;

int main() {
    char *primero, *segundo;
    primero = new char [4];
    segundo = new char [5];
    
    cout << "Primer array\n";
    for (int i = 0; i < 4; i++) {
        cin >> primero[i];
    }

    cout << "Segundo array\n";
    for (int j = 0; j < 5; j++) {
        cin >> segundo[j];
    }
    
    cout << "Segundo y Primero\n";
    int cont = 0;
    for (int k = 0; k < 9; k++) {
        
        if(k < 5){
            cout << segundo[k] << " ";
        }
        else if (k >= 5) {
            cout << primero[cont] << " ";
            cont ++;
        }
    }
    cout << endl;
    delete [] primero;
    delete [] segundo;

    return 0;
}
