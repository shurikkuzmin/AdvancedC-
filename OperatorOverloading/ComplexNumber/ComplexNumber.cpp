#include <iostream>
#include <string>

#include "Complex.h"

using namespace course;
int main()
{
    Complex c1(2.0, 3.0);
    Complex c2 = c1;

    c1 = c2;

    Complex c3 = c2;

    std::cout << c1 << " " << c3 << std::endl;

    return 0;
}