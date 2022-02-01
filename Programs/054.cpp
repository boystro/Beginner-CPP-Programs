// C++ Program to Remove all Characters in a String Except Alphabets

#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter String: \n";
    std::string str;
    std::getline(std::cin, str);
    std::string modstring = "";

    for ( char ch : str )
        if ( std::isalpha( ch ) ) modstring += ch;

    std::cout << "\nModified String\n" << modstring << std::endl;
}