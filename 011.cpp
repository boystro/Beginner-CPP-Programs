// C++ Program to Calculate Sum of Natural Numbers

#include <iostream>

int main() {
    int n;

    std::cout << "Enter a number: ";
    std::cin >> n;

    std::cout << "Sum of Natural numbers till n = " << (n * (n-1) ) / 2.0f << std::endl;
}