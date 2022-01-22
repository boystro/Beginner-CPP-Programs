// C++ Program to Swap Two Numbers

#include <iostream>

int main() {
    int x, y, temp;

    std::cout << "Enter two numbers: ";
    std::cin >> x;
    std::cin >> y;

    std::cout << "Before swap:" << std::endl;
    std::cout << "x: " << x << " | y: " << y << std::endl;

    temp = x;
    x = y;
    y = temp;

    std::cout << "Before swap:" << std::endl;
    std::cout << "x: " << x << " | y: " << y << std::endl;

}