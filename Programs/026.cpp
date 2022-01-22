// C++ Program to Display Prime Numbers Between Two Intervals

#include <iostream>
#include <cmath>

bool isPrime(unsigned int&);

int main()
{
    unsigned int lower, upper;

    std::cout << "Enter interval of two numbers: ";
    std::cin >> lower;
    std::cin >> upper;

    std::cout << "Prime numbers between " << lower << " and " << upper << " is / are : " << std::endl;
    for (unsigned int i=lower; i <= upper; i++)
        if ( isPrime(i) )
            std::cout << i << std::endl;
}

bool isPrime(unsigned int& num)
{
    if (num==0 || num==1) return false;
    for (int i=2; i <= (int)sqrt(num); i++)
        if (num%i==0) return false;
    return true;
}