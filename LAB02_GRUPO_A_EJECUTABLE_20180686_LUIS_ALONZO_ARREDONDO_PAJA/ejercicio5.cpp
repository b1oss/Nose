/*
Elabore un programa que lea n números y determine cuál es el mayor, el menor y la
media de los números leídos.
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

int i,mayor,menor,a;
    
    int tamanho;
    menor = 99999999;
    mayor = -999;
    for (a=1 ; a<=20 ; a++)
    {
        cout << "Ingrese numero" <<endl;
        cin >> i;
        if(i>mayor)
        {
            mayor=i;
        }
        if(i<menor)
        {
        menor=i;
        }
    }
    cout << "Menor : \t" << aux2 << endl;
    cout << "Mayor : \t" << aux << endl;
    cout << "Media : \t" << media/tamanho << endl;
    return 0;
}
