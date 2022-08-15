/*
Transfiera el código anterior reemplazando los punteros sin formato por
std::shared_ptr<Point> p;
*/

// Incorrecto

#include <iostream>
#include <memory>

class C1
{
protected:
    double d;
public:
    C1(double value) : d(value) {}
    ~C1() { std::cout << "\nDestructor C1\n"; };
    void print() {
        std::cout << d << std::endl;
    }
};

class C2
{
private:
    C1 e;
public:
    C2(C1 *value) : e(*value) {}
    ~C2() { std::cout << "\nDestructor C2\n"; }
    void printVal() {
        std::cout << *e << std::endl;
    }
};

int main() {
    std::shared_ptr<C1>ptr = std::make_shared<C1>(4.8);
    std::shared_ptr<C2>ptr_2 = std::make_shared<C1>(ptr);

    ptr->print();
    ptr_2->print();
    ptr_2.reset();

    return 0;
}