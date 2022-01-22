// C++ Program to Check Wheater a Number is Even or Odd

#include <iostream>

int main() {
    int x;

    std::cout << "Enter a number :";
    std::cin >> x;
    
    std::cout << "Number is " << (x%2==0 ? "Even" : "Odd") << std::endl;
}