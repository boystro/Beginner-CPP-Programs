// C++ Program to Check Leap Year

#include <iostream>

int main() {
    int year;

    std::cout << "Enter Year: ";
    std::cin >> year;

    bool isLeap=false;
    if (year%100==0) {
        if (year%400==0) isLeap = true;
    }
    else {
        if (year%4 ==0) isLeap = true;
    }

    std::cout << year << " is " << (isLeap? "" : "not ") << "a Leap Year." << std::endl;
}