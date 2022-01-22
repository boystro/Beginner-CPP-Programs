// C++ Program to Display Factors of a Number

#include <iostream>

int main() {
    int num;

    std::cout << "Enter number: ";
    std::cin >> num;

    std::cout << "Factors of " << num << " is/are : " << std::endl;
    for (int i=1; i<=num; i++)
        if (num%i==0) std::cout << i << std::endl;
}