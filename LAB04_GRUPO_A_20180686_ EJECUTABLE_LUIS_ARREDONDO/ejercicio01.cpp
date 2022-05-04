#include "iostream"
#include "string"
using namespace std;
int main()
{
    string nombre[3];
    string apellido[3];
    string edad[3];
    string dni[3];
    for(int i = 0; i < 3; i++)
    {
        cout << "\n******* Datos " << i + 1 << "********:\n";
        cout << "Nombre : ";
        getline(cin, nombre[i]);
        cout << "Apellido : ";
        getline(cin, apellido[i]);
        cout << "Edad : ";
        getline(cin,edad[i]);
        cout << "DNI : ";
        getline(cin,dni[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        cout << "Nombre : " << nombre[i] << " " << "Apellido : " << apellido[i] << " " << "Edad : " << edad[i] << " " << "DNI : " << dni[i] << endl;
    }
}