#include <iostream>
#include <fstream>
#include <string>

int main() {

	std::fstream outFile;

	std::string outputFileName = "text.txt";

	outFile.open(outputFileName, std::ios::out);

	if (outFile.is_open()) {
		outFile << "Hello there" << std::endl;
		outFile << 123 << std::endl;
		outFile.close();
	}
	else {
		std::cout << "Could not create file: " << outputFileName << std::endl;
	}

	return 0;
}