#include <iostream>
#include <string>

class Test
{
private:
    int id;
    std::string name;

public:
    Test() : id(0), name("")
    {}

    Test(int id, std::string name) : id(id), name(name)
    {}

    Test(const Test& other)
    {
        id = other.id;
        name = other.name;
    }

    void print()
    {
        std::cout << id << ": " << name << std::endl;
    }

    const Test& operator=(const Test &other)
    {
        id = other.id;
        name = other.name;

        return *this;
    }

    friend std::ostream& operator<<(std::ostream &out, Test& test)
    {
        out << test.id << ": " << test.name;
        return out;
    }
};

int main()
{
    Test test1(10, "Mike");
    Test test2(20, "Bob");

    std::cout << test1 << test2 << std::endl;

    int value = 1 + 2 + 5;

    return 0;
}