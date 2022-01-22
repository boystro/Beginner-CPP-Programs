// C++ Program to Check Wheather a Number is Prime or Not

#include <iostream>
#include <cmath>

int main()
{
    int num;

    std::cout << "Enter number: ";
    std::cin >> num;

    for (int i=2; i <= (int)sqrt(num); i++)
    {
        if (num%i==0) {
            std::cout << num << " is not Prime" << std::endl;
            return 0;
        }
    }

    std::cout << num << " is Prime" << std::endl;
}