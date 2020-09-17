#ifndef COMPLEX_H_
#define COMPLEX_H_

#include <iostream>

namespace course 
{

    class Complex
    {
    private:
        double real;
        double imaginary;
    public:
        Complex();
        Complex(double real, double imaginary);
        Complex(const Complex& other);
        const Complex& operator=(const Complex& other);

        double getReal() const
        { 
            return real; 
        }
        double getImaginary() const
        { 
            return imaginary;
        }
    };
    
    std::ostream &operator<<(std::ostream& out, const Complex &c);

    Complex operator+(const Complex &c1, const Complex &c2);

}



#endif
