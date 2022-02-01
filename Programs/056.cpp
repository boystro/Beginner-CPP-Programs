// C++ Program to Concatenate Two Strings

#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter String: \n";
    std::string str;
    std::getline(std::cin, str);
    
    std::cout << "Enter Another String: \n";
    std::string str2;
    std::getline(std::cin, str2);

    std::cout << "Concatinated string -\n" << str + str2 << std::endl;
}