#include "Poly.h"
#include <iostream>

int main()
{
    Poly p1;
    p1[-2] = 2;
    std::cout << p1[-2] << std::endl;
    return 0;
}