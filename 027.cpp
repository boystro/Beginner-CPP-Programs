// C++ Program to Check Armstrong Number

#include <iostream>
#include <cmath>
#include <vector>

int main() 
{
    int num;
    std::vector<short> digits;
    digits.reserve(9);
    
    std::cout << "Enter number: ";
    std::cin >> num;

    int temp=num;
    while(temp!=0) {
        digits.emplace_back(temp%10);
        temp = temp/10;
    }

    int val=0, size = digits.size();
    for (int digit: digits ) {
        val += pow(digit, size);
    }

    std::cout << num << " is " << (val==num ? "Armstrong" : "Not Armstrong") << std::endl;
}