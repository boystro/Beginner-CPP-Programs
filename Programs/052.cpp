// C++ Program to Find the Frequency of Characters in a String

#include <iostream>
#include <string>
#include <map>

int main()
{
    std::cout << "Enter String: \n";
    std::string str;
    std::getline(std::cin, str);
    std::map<char, int> freqDist;

    for ( char ch : str )
        freqDist[ch]++;

    std::cout << "Frequency Distribution in the string is as follows -\n";
    for ( auto itr : freqDist )
        std::cout << itr.first << " : " << itr.second << std::endl;
}