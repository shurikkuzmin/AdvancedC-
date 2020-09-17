#include <iostream>
#include <string>

#include "Complex.h"

using namespace course;

int main()
{
    Complex c1(3, 4);
    Complex c2(2, 3);
    Complex c3 = c1 + c2;

    std::cout << c1 << std::endl;
    std::cout << c1 + c2 + c3 << std::endl;
    std::cout << c3 << std::endl;

    Complex c4(4, 2);
    Complex c5 = c4 + 7;
    std::cout << c5 << std::endl;

    Complex c6(1, 7);
    std::cout << 3.2 + c6 << std::endl;

    std::cout << 7 + c1 + c2 + 8 + 9 + c6 << std::endl;

    return 0;
}