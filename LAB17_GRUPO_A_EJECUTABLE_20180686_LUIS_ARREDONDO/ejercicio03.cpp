/*
Analice y describa el siguiente comportamiento
*/

/*
RPTA:
Se tienen dos clases un será de template tipo int o double o float y el otro será exclusivo para el tipo “char”,
en int main() tenemos como primera variable del tipo int, por lo tanto, este será ejecutado en la clase Contenedor,
el cual retornará el número + 1,  como tenemos 5, imprimirá 6. En el segundo caso tenemos un caracter por lo tanto 
este será ejecutado en la clase Contenedor<char>, esta clase cambia un caracter de minúscula a mayúscula, en el ejemplo 
tenemos t, el programa imprimirá T.
*/
#include <iostream>

// Recibe variables numéricas int, double, float
template <class T>
class Contenedor
{
    T elemento;

    public:
    // Retorna el elemento sumado en 1
    Contenedor(T arg) {
        elemento = arg;
    }
    T add() { return ++elemento; }
};

template <>
// Clase exclusiva para variables char
class Contenedor<char>
{
    char elemento;
    public:
        Contenedor( char arg) {
            elemento = arg;
        }
        // Cambia el caracter de minúscula a mayúsula
        char UpperCase() {
            if ((elemento >= 'a') && (elemento <= 'z'))
            {
                elemento += 'A' - 'a';
            }
            return elemento;
        }
};

int main() {
    // Será mandado a "Contenedor"
    Contenedor<int> cint(5);
    // Será ejecuatdo en "Contenedor<char>"
    Contenedor<char> cchar('t');
    std::cout << cint.add() << std::endl;
    std::cout << cchar.UpperCase() << std::endl;
    return 0;
}