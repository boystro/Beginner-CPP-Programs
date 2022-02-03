// C++ Program to Store and Display Information Using Structure

#include <iostream>
#include <string>

struct someinfo
{
    int integer;
    float floatingNumber;
    char character;
    std::string string;
};

int main()
{
    someinfo si;
    si.integer = 9;
    si.floatingNumber = 50.05f;
    si.character = 'C';
    si.string = "Hello!";

    std::cout << "Information Display\n";
    std::cout << si.integer << "\n";
    std::cout << si.floatingNumber << "\n";
    std::cout << si.character << "\n";
    std::cout << si.string << "\n";
}