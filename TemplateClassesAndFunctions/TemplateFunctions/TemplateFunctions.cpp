#include <iostream>
#include <string>

template<typename T>
void print(T n)
{
    std::cout << n << std::endl;
}

int main()
{
    print<std::string>("Hello");
    print<int>(5);
    print("Hi there");
    return 0;
}