/*
Al anterior código implemente un puntero débil a un puntero el cual no puede
estar vacío.
*/
// Incorrecto - Incompleto
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
    double e;
public:
    C2(double value) : e(value) {}
    ~C2() { std::cout << "\nDestructor C2\n"; }
    void print() {
        std::cout << e << std::endl;
    }
};

int main() {
    std::shared_ptr<C1>ptr = std::make_shared<C1>(4.8);
    std::shared_ptr<C1>ptr_2(ptr);
    std::weak_ptr<C1> ptr_3 = ptr_2;

    ptr->print();
    ptr_2->print();
    ptr_2.reset();

    return 0;
}