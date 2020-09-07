#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string fileName = "stats.txt";
    std::ifstream input;

    input.open(fileName);

    if (!input.is_open()) {
        return 1;
    }

    while (input) {
        std::string line;
        std::getline(input, line, ':');

        int population;
        input >> population;

        //input.get();

        input >> std::ws;
        if (!input) {
            break;
        }

        std::cout << "'" << line << "'" << " -- '" << population << "'" << std::endl;
    }

    input.close();
    return 0;
}