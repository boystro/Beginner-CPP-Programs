// C++ Program to Check Wheather a Number can be Express as Sum of Two Prime Numbers

#include <iostream>
#include <vector> 
#include <cmath>

bool isPrime(unsigned int& num)
{
    if (num==0 || num==1) return false;
    for (int i=2; i <= (int)sqrt(num); i++)
        if (num%i==0) return false;
    return true;
}
int main() {
    unsigned int num;

    std::cout << "Enter Number: ";
    std::cin >> num;

    std::vector<int> primes;
        for (unsigned int i=2; i <= num; i++)
            if ( isPrime(i) )
                primes.emplace_back(i);

    int temp;
    for (int prime : primes)
    {
        temp = num-prime;
        for (int prime2 : primes)
        {
            if ( temp == prime2 )
            {
                std::cout << prime << " + " << temp << " = " << num << std::endl;
                return 0;
            }
        }
    }
    std::cout << "No Prime Combination possible for " << num << std::endl;
}