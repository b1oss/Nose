/*
Escribir un programa que almacene la cadena de caracteres contraseña en una
variable, pregunte al usuario por la contraseña hasta que introduzca la contraseña
correcta.
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    string contrasenha, ingresarContrasenha;
    cout << "Cree una contrasenha : "; getline(cin,contrasenha);
    cout << "Ingrese contrasenha : "; getline(cin,ingresarContrasenha);
    while (contrasenha != ingresarContrasenha)
    {
        cout << "Contrasenha incorrecta : "; getline(cin,ingresarContrasenha);
    }
    
    cout << "\tContrasenha correcta." << endl;

    return 0;
}
