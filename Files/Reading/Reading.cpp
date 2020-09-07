#include <iostream>
#include <fstream>
#include <string>

int main() {
	
	std::string inFileName = "text.txt";
	std::ifstream inFile;

	inFile.open(inFileName, std::ios::in);

	if (inFile.is_open()) {

		std::string line;

		while (inFile) {
			std::getline(inFile, line);
			std::cout << line << std::endl;

		}

		inFile.close();
	}
	else {
		std::cout << "Cannot open file: " << inFileName << std::endl;
	}

	return 0;
}