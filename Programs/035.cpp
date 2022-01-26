// C++ Program to Find Sum of Natural Numbers using Recursion

#include <iostream>

int getSum(int n)
{
    if (n==1) return 1;
    return getSum(n-1) + n;
}

int main()
{
    int n;

    std::cout << "Enter number: ";
    std::cin >> n;

    std::cout << "Sum of " << n << " natural numbers = " << getSum(n) << std::endl;
}