/*
Utilizando Functores y el método std::sort, elabore una clase Elementos con dos
atributos de números enteros a y b. Genere una lista de 20 elementos de esta clase
Elementos con valores aleatorios tanto para a y b. Mediante el método std::sort
ordénelos de la forma en que un Objeto al ser comparado con un segundo se tenga
la desigualdad : obj1.a < obj2.b . El método std::sort debe de trabajar con un
objeto Functores. De ser necesario, investigue como realizar este procedimiento
que dependa de un objeto del tipo Functores.
*/
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <vector>

using namespace std;

class Elementos
{
public:
    void operator()(vector<int>numeros_a, vector<int>numeros_b) {
        cout << "Desordenado 01\n";
        for (auto x : numeros_a)
        {
            cout << x << " ";
        }
        
        cout << "\nOrdenado 01\n";
        sort(numeros_a.begin(), numeros_a.end());
        for (auto x : numeros_a)
        {
            cout << x << " ";
        }
        
        cout << "\n\nDesordenado 02\n";
        for (auto y : numeros_b)
        {
            cout << y << " ";
        }
        
        cout << "\nOrdenado 02\n";
        sort(numeros_b.begin(), numeros_b.end());
        for (auto y : numeros_b)
        {
            cout << y << " ";
        }

        cout << "\n\nComparacion\n";
        for (int h = 0; h < numeros_a.size(); h++)
        {
            if (numeros_a[h] > numeros_b[h])
            {
                cout << numeros_a[h] << " > " << numeros_b[h] << endl;
                
            }
            else if (numeros_a[h] < numeros_b[h])
            {
                cout << numeros_a[h] << " < " << numeros_b[h] << endl;
            }
            else
            {
                cout << numeros_a[h] << " = " << numeros_b[h] << endl;
            }
        }
    }
    ~Elementos(){};
};

int main() {
    srand(time(NULL));
    vector<int> numeros_a;
    vector<int> numeros_b;
    int random_a, random_b;
    for (int i = 0; i < 20; i++)
    {
        random_a = rand() % 100 + 1;
        random_b = rand() % 100 + 1;
        numeros_a.push_back(random_a);
        numeros_b.push_back(random_b);
    }
    
    Elementos obj1;
    obj1(numeros_a,numeros_b);
    
    cout << endl;
    return 0;
}