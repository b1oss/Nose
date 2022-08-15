/*
Transfiera el código anterior reemplazando los punteros sin formato por
std::unique_ptr.
*/
#include <iostream>
#include <memory>

class Point
{
public:
    Point(double x, double y) : x(x), y(y) {};
    ~Point() { std::cout << "Point destructor" << std::endl;}
    void print()
    {
        std::cout << "(" << x << ", " << y << ")\n";
    }
    void X(double _x) { std::cout << _x << std::endl;};
    void Y(double _y) { std::cout << _y << std::endl;};
private:
    double x{}, y{};
};

int main() {

    std::unique_ptr<double>d = std::make_unique<double>();
    std::unique_ptr<Point>pt(new Point(1.0,2.0));
    *d = 2.0;
    (*pt).X(3.0);
    (*pt).Y(3.0);
    pt->X(3.0);
    pt->Y(3.0);

    return 0;
}