// C++ Programs To Create Pyramid Pattern

#include <iostream>

int main() 
{
    int num;

    std::cout << "Enter number: ";
    std::cin >> num;

    int i, j;
    for (i=1; i<=num; i++)
    {
        for (j=0; j<(num-i); j++) std::cout << "  ";
        for (j=0; j<i; j++) std::cout << "*   ";
        std::cout << std::endl;
    }
}