#include <iostream>
#include <string>
#include <vector>

int main() {

    std::vector<std::string> strings;

    strings.push_back("one");
    strings.push_back("two");
    strings.push_back("three");

    for (int i = 0; i < strings.size(); i++) {
        std::cout << strings[i] << std::endl;
    }

    for (std::vector<std::string>::iterator it = strings.begin(); it != strings.end(); it++)
        std::cout << *it << std::endl;

    std::vector<std::string>::iterator it = strings.begin();
    it += 2;
    std::cout << *it << std::endl;
    return 0;
}