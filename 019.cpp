// C++ Program to Calculate Power of a Number

#include <iostream>
#include <cmath>

int main() {
    int num, p;

    std::cout << "Enter number and power: ";
    std::cin >> num;
    std::cin >> p;

    std::cout << num << " raised to power " << p << " is = " << pow(num, p) << std::endl;
}