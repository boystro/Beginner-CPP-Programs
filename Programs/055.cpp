// C++ Program to Find the Length of a String

#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter String: \n";
    std::string str;
    std::getline(std::cin, str);
    
    std::cout << "Length of string is: " << str.length() << std::endl;
}