// C++ Program to Find Quotient and Remainder

#include <iostream>

int main() {
    int x, y;
    
    std::cout << "Enter 1st number: ";
    std::cin >> x;
    
    std::cout << "Enter 2nd number: ";
    std::cin >> y;

    std::cout << "Quotient: " << x / y << std::endl;
    std::cout << "Remainder: " << x % y << std::endl; 
}