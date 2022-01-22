// C++ Program to Reverse a number

#include <iostream>

int main() {
    int num;

    std::cout << "Enter a number: ";
    std::cin >> num;

    int rev=0, temp=num;
    while (temp != 0) {
        rev *= 10;
        rev += temp%10;
        temp = temp/10;
    }
    std::cout << "Reverse of " << num << " is " << rev << std::endl;
}