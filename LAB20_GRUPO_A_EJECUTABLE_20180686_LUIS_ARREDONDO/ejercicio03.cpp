/*
Implementar el código para las clases C1 y C2, cada una de las cuales contiene el
objeto compartido d anterior, por ejemplo:
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
    double e;
public:
    C2(double value) : e(value) {}
    ~C2() { std::cout << "\nDestructor C2\n"; }
    void print() {
        std::cout << e << std::endl;
    }
};

int main() {
    /*std::shared_ptr<C1>ptr = std::make_shared<C1>(4.8);
    std::shared_ptr<C1>ptr_2(ptr);

    ptr->print();
    ptr_2->print();
    ptr_2.reset();
*/
    C1 *ptr = new C1(4.7);
    //C2 *ptr_2 = new C2(*ptr);
    C2 *ptr_2 = new C2(5.4);

    (*ptr).print();
    (*ptr_2).print();

    delete ptr;
    delete ptr_2;

    return 0;
}