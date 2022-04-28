/*
Escribir un programa que lea 10 datos desde el teclado y sume sólo aquellos que sean negativos.
*/
    #include <iostream>
    using namespace std;
    int main(int argc, char const *argv[])
    {
        int cadena[10], suma = 0;
        int size = sizeof(cadena)/sizeof(cadena[0]);
        for (int i = 0; i < size; i++)
        {
            cout << "Valor : "; cin >> cadena[i];
        }

        for (int i = 0; i < size; i++)
        {
            if (cadena[i] < 0)
                suma+=cadena[i];
        }
        cout << "Suma = " << suma << endl;
        return 0;
    }
