// C++ Program to Find GCD

#include <iostream>

int main() {
    int a, b;

    std::cout << "Enter two numbers: ";
    std::cin >> a;
    std::cin >> b;

    int gcd=1;
    for (int i=1; i < (a/2); i++)
        if (a%i==0 && b%i==0) gcd=i;
        
    std::cout << "GCD for " << a << " and " << b << " is " << gcd << std::endl;
}