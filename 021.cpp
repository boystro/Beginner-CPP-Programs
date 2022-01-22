// C++ Program to Subtract Complex Number using Operator Overloading

#include <iostream>

struct Complex
{
private:
    int real, complex;

public:
    Complex() : real(0), complex(0) {}
    Complex(int r, int c) : real(r), complex(c) {}

    int getReal() const { return real; }
    int getComplex() const { return complex; }

    Complex operator+(const Complex& other) const {
        return Complex(real+other.real, complex+other.complex);
    }

    Complex operator-(const Complex& other) const {
        return Complex(real-other.real, complex-other.complex);
    }
};

std::ostream& operator<<(std::ostream& stream, const Complex& complex) {
    std::cout << complex.getReal() << " + " << complex.getComplex() << "i";
    return stream;
}

int main() {
    Complex num1 = {5, 7};
    Complex num2 = {1, 2};

    std::cout << "Num 1 : " << num1 << std::endl;
    std::cout << "Num 2 : " << num2 << std::endl;
    std::cout << "Diff : " << num1 - num2 << std::endl;
}