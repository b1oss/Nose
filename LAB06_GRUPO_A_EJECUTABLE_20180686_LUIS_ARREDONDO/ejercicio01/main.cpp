#include <iostream>
#include "figura.h"
#include "figura.cpp"

int main () {
    Figura f1 = Figura(8, 4);
    f1.area();
    f1.perimetro();

    return 0;
}
