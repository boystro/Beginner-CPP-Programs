// C++ Program to Find ASCII Value of a Character

#include <iostream>

int main()
{
    char c;

    std::cout << "Enter a Character: ";
    std::cin >> c;

    std::cout << "ASCII of " << c << " is " << (int)c << std::endl;
}