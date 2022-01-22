// C++ Program to Display Armstrong Number Between Two Intervals

#include <iostream>
#include <cmath>
#include <vector>

bool isArmstrong(int&);

int main()
{
    int lower, upper;

    std::cout << "Enter lower and upper of interval: ";
    std::cin >> lower;
    std::cin >> upper;

    std::cout << "Armstrong numbers in the interval " << lower << " - " << upper << std::endl;
    for (int i=lower; i<=upper; i++)
        if (isArmstrong(i)) std::cout << i << std::endl;
}

bool isArmstrong(int& num)
{
    int temp=num;
    std::vector<short> digits;
    
    while(temp!=0) {
        digits.emplace_back(temp%10);
        temp = temp/10;
    }
    int val=0, size = digits.size();
    for (int digit: digits ) {
        val += pow(digit, size);
    }
    return val==num;
}