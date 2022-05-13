#ifndef FIGURA_H
#define FIGURA_H

#include <iostream>

class Figura {
    private:
        int base, altura;
    public:
        Figura(int,int);
        ~Figura();
        void area();
        void perimetro();
};

#endif
