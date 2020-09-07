#include <iostream>
#include <map>
#include <string>

class Person
{
public:
    
    Person() :
        name(""), age(0)
    {
    }

    Person(const Person &other)
    {
        std::cout << "Copy constructor running!" << std::endl;
        name = other.name;
        age = other.age;
    }

    Person(std::string name, int age) :
        name(name), age(age)
    {
    }


    void print() const
    {
        std::cout << name << ": " << age << std::endl;
    }

    bool operator<(const Person& other) const
    {
        if (name == other.name)
            return age < other.age;
        else
            return name < other.name;
    }

private:
    std::string name;
    int age;
};


int main()
{



    std::map<Person, int> people;

    people[Person("Mike", 40)] = 40;
    people[Person("Mike", 321)] = 123;
    people[Person("Vicky", 30)] = 30;
    people[Person("Raj", 20)] = 20;

    /*people.insert(std::make_pair(55, Person("Bob", 45)));
    people.insert(std::make_pair(55, Person("Sue", 24)));

    */

    for (std::map<Person, int>::iterator it = people.begin(); it != people.end(); it++)
    {
        std::cout << it->second << ": " << std::flush;
        it->first.print();
    }
    
    /*
    std::map<std::string, int> ages;

    ages["Mike"] = 40;
    ages["Raj"] = 20;
    ages["Vicky"] = 30;
    ages["Mike"] = 70;

    ages.insert(std::pair<std::string, int>("Peter", 110));
    ages.insert(std::make_pair("Donald", 120));

    std::cout << ages["Raj"] << std::endl;

    std::cout << ages["Sue"] << std::endl;

    if (ages.find("Vicky") != ages.end())
    {
        std::cout << "Found Vicky" << std::endl;
    }
    else
    {
        std::cout << "Key not found" << std::endl;
    }

    for (std::map<std::string, int>::iterator it = ages.begin(); it != ages.end(); it++)
    {
        std::pair<std::string, int> age = *it;
        
        std::cout << age.first << ": " << age.second << std::endl;
    }

    for (std::map<std::string, int>::iterator it = ages.begin(); it != ages.end(); it++)
    {
        std::cout << it->first << ": " << it->second << std::endl;
    }*/


    return 0;
}