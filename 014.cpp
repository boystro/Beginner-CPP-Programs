// C++ Program to Generate Multiplication Table

#include <iostream>

int main() {
    int num, n;

    std::cout << "Enter number to generate multiplication table of: ";
    std::cin >> num;
    std::cout << "Enter number to generate multiplication table to: ";
    std::cin >> n;

    std::cout << std::endl;
    for ( int i=1; i <= n; i++ )
        std::cout << num << " x " << i << " = " << num*i << std::endl;
}