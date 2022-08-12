/*
Utilizando Functores, elabore una clase que simule el proceso de la función
estándar FIND. Se debe trabajar enviando como parámetros el índice de inicio, el
índice final de la búsqueda y el dato a buscar. Retorne todas las ocurrencias
iguales dentro del rango indicado (debe devolver un vector con los índices de
todas las ocurrencias)
*/

#include <iostream>
#include <vector>

using namespace std;

class Buscar
{
public:
    void operator()(int inicio, int final, int buscar) {
        vector<int> numeros = {133,154,12,3452,245,75443,983,923,133,9282,12,75443,12,133,14,65252,2812,133};
        for (int i = inicio; i < final; i++)
        {
            if (numeros.at(i) == buscar)
                cout << i + 1 << ". " <<  numeros.at(i) << endl;
        }
    }
    void operator()(int inicio, int final, string buscar) {
        vector<string> nombres{"alonzo","lisa","adolf","alf","melisa","alonzo","alonzo","melisa","sven","lisa"};
        for (int i = inicio; i < final; i++)
        {
            if (nombres.at(i) == buscar)
                cout << i + 1 << "." << nombres.at(i) << endl;
        }
    }
};

int main() {

    Buscar obj;
    obj(2,14,133);
    cout << endl;
    obj(0,7,"alonzo");

    cout << endl;
    return 0;
}