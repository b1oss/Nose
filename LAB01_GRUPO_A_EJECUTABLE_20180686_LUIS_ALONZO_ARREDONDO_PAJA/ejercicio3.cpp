/*
Elabore un programa que solicite ingresar una hora del día 
(HH:MM en formato de cadena), solicite un tiempo en minutos a agregar, 
y retorne la hora de finalización (el formato de salida debe de estar 
en AM o PM según corresponda).
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    string hora;
    int minutos;
    cout << "Ingrese la hora : "; getline(cin,hora);
    cout << hora << endl;
    cout << "Minutos a agregar : "; cin >> minutos;
    
    
    
    return 0;
}