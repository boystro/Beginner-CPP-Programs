// C++ Program to Check Prime Number by Creating a Function

#include <iostream>

bool isPrime(unsigned int& num)
{
    if (num==0 || num==1) return false;
    for (int i=2; i <= (int)sqrt(num); i++)
        if (num%i==0) return false;
    return true;
}

int main() {
    unsigned int num;

    std::cout << "Enter number: ";
    std::cin >> num;

    std::cout << num << (isPrime(num) ? " is Prime." : " is Not Prime.") << std::endl;
}