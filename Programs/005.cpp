// C++ Program to Find Size of int, float, double and char in Your System

#include <iostream>

int main() {
    int i;
    std::cout << "int: " << sizeof i << std::endl;

    float f;
    std::cout << "float: " << sizeof f << std::endl;

    double d;
    std::cout << "double: " << sizeof d << std::endl;
    
    char c;
    std::cout << "char: " << sizeof c << std::endl;
}