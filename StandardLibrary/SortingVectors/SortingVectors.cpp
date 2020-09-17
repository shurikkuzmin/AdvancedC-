#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class Test
{
private:
    std::string name;
    int id;

public:
    Test(int id, std::string name) :
        id(id), name(name)
    {}

    void print()
    {
        std::cout << id << ": " << name << std::endl;
    }

    /*bool operator<(const Test& other) const
    {
        return name < other.name;
    }*/
    friend bool comp(const Test& a, const Test& b);

};

bool comp(const Test& a, const Test& b)
{
    return a.name < b.name;
}

int main() {

    std::vector<Test> tests;

    tests.push_back(Test(5, "Mike"));
    tests.push_back(Test(10, "Sue"));
    tests.push_back(Test(7, "Raj"));
    tests.push_back(Test(3, "Vicky"));

    std::sort(tests.begin(), tests.begin() + 2, comp);

    for (int i = 0; i < tests.size(); i++)
    {
        tests[i].print();
    }

    return 0;

}