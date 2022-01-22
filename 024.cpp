// C++ Program to Check Wheather a Number is Palindrome or Not

#include <iostream>

int reverseNum(int&);

int main() 
{
    int num;

    std::cout << "Enter number: ";
    std::cin >> num;
    
    std::cout << (num==reverseNum(num) ? "Number is Palindrome" : "Number is Not Palindrome") << std::endl;
}

int reverseNum(int& num)
{
    int rev=0, temp=num;
    while (temp != 0) {
        rev *= 10;
        rev += temp%10;
        temp = temp/10;
    }
    return rev;
}