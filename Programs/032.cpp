// C++ Program to Display Prime Numbers Between Two Intervals Using Functions

#include <iostream>
#include <cmath>
#include <vector>

bool isPrime(unsigned int& num)
{
    if (num==0 || num==1) return false;
    for (int i=2; i <= (int)sqrt(num); i++)
        if (num%i==0) return false;
    return true;
}

std::vector<int> getPrimes(unsigned int& lower, unsigned int& upper)
{
    std::vector<int> primes;
    primes.reserve(upper-lower);
    for (unsigned int i=lower; i <= upper; i++)
        if ( isPrime(i) )
            primes.emplace_back(i);
    return primes;
}

std::ostream& operator<<(std::ostream& stream, const std::vector<int>& vec){
    for (int element : vec) {
        stream << element << " ";
    }
    return stream;
}

int main()
{
    unsigned int lower, upper;

    std::cout << "Enter interval of two numbers: ";
    std::cin >> lower;
    std::cin >> upper;

    std::cout << "Prime numbers between " << lower << " and " << upper << " is / are : " << std::endl;
    std::vector<int> primes = getPrimes(lower, upper);

    std::cout << primes << std::endl;
}