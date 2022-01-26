// C++ Program to Convert Binary Number to Decimal and vice-versa

#include <iostream>
#include <cmath>
#include <string>

std::string intToBin(int num)
{
    int temp=num;
    std::string bin = "";
    std::string temp_str;

    while (temp!=0)
    {
        temp_str = ('0' + temp%2);
        temp_str += bin;
        bin = temp_str;
        std::cout << bin <<std::endl;
        temp/=2;
    }

    return bin;
}

unsigned long int binToInt(long long num)
{
    long long temp=num;
    unsigned long int in=0;

    int temp2=0;
    while (temp!=0)
    {
        in += temp%10 * pow(2, temp2);
        temp /= 10;
        temp2++;
    }
    
    return in;
}


int main() {
    std::cout << intToBin(1234) << std::endl;
    std::cout << binToInt((long long)1001001001) << std::endl;
}