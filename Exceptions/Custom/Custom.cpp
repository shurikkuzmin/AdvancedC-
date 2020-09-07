#include <iostream>
#include <exception>

class MyException : public std::exception{
public:
	virtual const char* what() const throw() {
		return "Something bad happened!";
	}

};

class Test {
public:
	void goesWrong() throw(std::bad_alloc) {
		throw MyException();
	}
};
int main() {
	Test test;
	try {
		test.goesWrong();
	}
	catch (MyException &e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}