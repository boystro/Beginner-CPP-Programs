// C++ Program to Calculate Factorial of a Number Using Recursion

#include <iostream>

int fact(int num)
{
    if (num==0) return 1;
    return fact(num-1) * num;
}


int main()
{
    int num;

    std::cout << "Enter number: ";
    std::cin >> num;

    std::cout << "Factorial of " << num << " is " << fact(num) << std::endl;
}