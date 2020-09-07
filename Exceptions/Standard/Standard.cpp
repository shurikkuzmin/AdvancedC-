#include <iostream>

class CanGoWrong {
public:
	CanGoWrong() {
		char *pMemory = new char[999999999];
		delete[] pMemory;
	}

};

int main() {

	try {
		CanGoWrong wrong;
	}
	catch (std::bad_alloc &e) {
		std::cout << "Caught exception: " << e.what() << std::endl;
	}

	std::cout << "Still running" << std::endl;
	return 0;
}