// C++ Program to Convert Octal Number to Decimal and vice-versa

#include <iostream>
#include <cmath>
#include <string>

std::string intToOct(int num)
{
    int temp=num;
    std::string bin;
    std::string temp_str;

    while (temp!=0)
    {
        temp_str = ('0' + temp%8);
        temp_str += bin;
        bin = temp_str;
        std::cout << bin <<std::endl;
        temp/=8;
    }

    return bin;
}

unsigned long int octToInt(long long num)
{
    long long temp=num;
    unsigned long int in=0;

    int temp2=0;
    while (temp!=0)
    {
        in += temp%10 * pow(8, temp2);
        temp /= 10;
        temp2++;
    }
    
    return in;
}


int main() {
    std::cout << intToOct(1234) << std::endl;
    std::cout << octToInt((long long)7654321) << std::endl;
}