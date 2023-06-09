#include <iostream>
#include <string>

template<class T>
void print(T n)
{
    std::cout << "Template version: " << n << std::endl;
}

void print(int value)
{
    std::cout << "Non-template version: " << value << std::endl;
}

template<class T>
void show()
{
    std::cout << T() << std::endl;
}

int main()
{
    print<std::string>("Hello");
    print<int>(5);
    print<>(6);
    show<double>();
}