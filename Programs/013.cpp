// C++ Program to Find Factorial

#include <iostream>

int main() {
    int n;

    std::cout << "Enter number: ";
    std::cin >> n;

    int fact=1;
    for (int i = 0 ; i < n ; i++ )
        fact *= n-i;

    std::cout << "Factorial of " << n << " is " << fact << std::endl;
}