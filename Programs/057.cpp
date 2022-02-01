// C++ Program to Copy Strings

#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter String: \n";
    std::string str, str2;
    std::getline(std::cin, str);

    str2 = str;

    std::cout << str2 << std::endl;
}