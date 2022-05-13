#include <iostream>
#include "edad.h"

using namespace std;

Edad::Edad(string _nombre, int _mes, int _dia, int _anio) {
    nombre = _nombre;
    mes = _mes;
    dia = _dia;
    anio = _anio;
}

Edad::~Edad() {

}

void Edad::mostrar() {
    int today = 12, month = 5, year = 2022, edad = 0, meses = 0, dias = 0;
    edad = year - anio;
    meses = mes - month;
    dias = dia - today;
//Los dias no tienen validacion, es decir si es mayor a 28 29 30 o 31.
//Los meses y dias no calculan la edad exacta en caso estos sean menores al dia y mes actual.
    if (meses > 0) {
        if (dias >= 0) {
            edad = edad - 1;
        }
    }
    else if (meses == 0) {
        if (dias > 0) {
            edad = edad - 1;
        }
        else if (dias == 0) {
            cout << "Feliz cumpleanios. :D" << endl;
        } 
    }

    cout << nombre << " tu edad es " << edad << " anios con " << meses << " meses " << " y " << dias << " dias.\n";
}
