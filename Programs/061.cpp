// C++ Program to Add Complex Numbers by Passing Structure to a Function

#include <iostream>

struct Complex
{
    int real;
    int imaginary;
};

Complex addComplex(const Complex& complex1, const Complex& complex2)
{
    Complex returnVal = { complex1.real+complex2.real, complex1.imaginary+complex2.imaginary };
    return returnVal;
}

std::ostream& operator<<(std::ostream& stream, const Complex& complex)
{
    stream << complex.real << "+" << complex.imaginary << "i";
    return stream;
}

int main()
{
    Complex c1 = { 5, 6 };
    Complex c2 = { 7, 2 };

    std::cout << c1 << " + " << c2 << " = " << addComplex(c1, c2) << std::endl;
}
