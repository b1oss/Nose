/*
Utilizando Functores, elabore una clase que calcule la ecuación de regresión lineal
simple (y = a + bc) de un conjunto de pares de datos (x, y) almacenados en un
vector, retorne como parte del resultado los valores de a y b. Apóyese en functores
para calcular las diferentes sumatorias que pueden presentarse.
*/
#include <iostream>
#include <vector>

class Regresion
{
public:
    void operator()() {
        std::cout << "suma" << std::endl;
    }
    int operator()(int tam) {
        std::vector<float> x = {2.5,4.3,6.1,8.0};
        std::vector<float> y = {3.3,5.4,6.1,7.2};
        float suma_x = 0, suma_x_2 = 0, suma_y = 0, suma_x_y = 0;
        for (int i = 0; i < tam; i++)
        {
            suma_x += x[i];
            suma_x_2 += (x[i] * x[i]);
            suma_y += y[i];
            suma_x_y += (x[i] * y[i]);
        }
        float a, b;
        b = ((tam * suma_x_y) - (suma_x * suma_y)) / (tam * suma_x_2 - (suma_x * suma_x));
        a = (suma_y - (b * suma_x)) / tam;
        std::cout << "a = " << a << std::endl;
        std::cout << "b = " << b << std::endl;
    }
};

int main() {
    Regresion obj;
    int suma = obj(4);
    system("pause");
    return 0;
}