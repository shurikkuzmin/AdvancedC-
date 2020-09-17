#include <iostream>
#include <stack>
#include <queue>
#include <string>

class Test 
{
private:
    std::string name;

public:
    Test(std::string name):
        name(name)
    {}

    ~Test() 
    {
        //std::cout << "Object destroyed " << name  <<std::endl;
    }

    void print()
    {
        std::cout << name << std::endl;
    }
};

int main()
{
    //LIFO
    std::stack<Test> testStack;

    testStack.push(Test("Mike"));
    testStack.push(Test("John"));
    testStack.push(Test("Sue"));


    /* Test& test1 = testStack.top();
    test1.print();
    testStack.pop(); */
    
    while (testStack.size() > 0)
    {
        Test &test = testStack.top();
        test.print();
        testStack.pop();
    }

    std::cout << std::endl;

    // FIFO
    std::queue<Test> testQueue;

    testQueue.push(Test("Mike"));
    testQueue.push(Test("John"));
    testQueue.push(Test("Sue"));

    testQueue.back().print();

    while (testQueue.size() > 0)
    {
        Test &test = testQueue.front();
        test.print();
        testQueue.pop();
    }


    return 0;
}