/*
Implemente el siguiente código que usa punteros sin procesar y explique lo que
hace:
*/
#include <iostream>
#include <memory>

class Point
{
public:
    // Recibe dos valores double, las cuales se les asigna a "x" y "y"
    Point(double x, double y) : x(x), y(y) {};
    ~Point() { std::cout << "Point destructor" << std::endl;}
    // Imprime "x" y "y" como coordenadas.
    void print()
    {
        std::cout << "(" << x << ", " << y << ")\n";
    }
    // Imprime el valor de _x
    void X(double _x) { std::cout << _x << std::endl;};
    // Imprime el valor de _y
    void Y(double _y) { std::cout << _y << std::endl;};
private:
    // Inicializa las variables con el valor de 0.0
    double x{}, y{};
};

int main() {

    // Se crea dos punteros en "heap memory", uno es de tipo double y el otro del tipo clase Point
    double* d = new double(1.0);
    Point* pt = new Point(1.0, 2.0);
    // Al puntero d se le asigna un valor de 2.0
    *d = 2.0;
    // Se llama a la función X de la clase Point dándole un valor al puntero *pt
    (*pt).X(3.0);
    // Se llama a la función Y de la clase Point dándole un valor al puntero *pt
    (*pt).Y(3.0);

    // Se llama a la función X de la clase con el valor de 3.0 en la dirección de "pt"
    pt->X(3.0);
    // Se llama a la función Y de la clase con el valor de 3.0 en la dirección de "pt"
    pt->Y(3.0);
    delete d;
    delete pt;

    return 0;
}