// C++ Program to Find GCD Using Recursion

#include <iostream>

int GCD(int a, int b){
    if (a%b == 0) return b;
    return GCD(b, a%b);
}

int main()
{
    int a, b;
    
    std::cout << "Enter two numbers: ";
    std::cin >> a;
    std::cin >> b;
    
    std::cout << "GCD of " << a << " and " << b << " is " << GCD(a, b) << std::endl;
} 