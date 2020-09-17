#include <iostream>
#include <set>
#include <string>

class Test
{
    int id;
    std::string name;

public:
    Test() : id(0), name("")
    {}
    
    Test(int id, std::string name) : id(id), name(name)
    {}

    void print() const
    {
        std::cout << id << ": " << name << std::endl;
    }

    bool operator<(const Test &other) const
    {
        return name < other.name;
    }
};

int main()
{
    std::set<int> numbers;

    numbers.insert(50);
    numbers.insert(10);
    numbers.insert(30);
    numbers.insert(20);

    for (std::set<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
    {
        std::cout << *it << std::endl;
    }

    std::set<int>::iterator itFind = numbers.find(30);

    if (itFind != numbers.end())
        std::cout << "Found: " << *itFind << std::endl;

    if (numbers.count(30))
    {
        std::cout << "Number found." << std::endl;
    }

    std::set<Test> tests;
    tests.insert(Test(10, "Mike"));
    tests.insert(Test(30, "Joe"));
    tests.insert(Test(333, "Joe"));
    tests.insert(Test(20, "Sue"));

    for (std::set<Test>::iterator it = tests.begin(); it != tests.end(); it++)
    {
        it->print();
    }

    return 0;
}