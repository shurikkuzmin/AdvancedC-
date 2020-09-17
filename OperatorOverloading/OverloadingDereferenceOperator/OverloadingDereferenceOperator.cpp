#include <iostream>
#include <string>
#include "Complex.h"

using namespace course;
int main()
{
    Complex c1(2, 4);

    std::cout << c1 << std::endl;

    std::cout << *c1 + *Complex(4,3) << std::endl;

    return 0;
}