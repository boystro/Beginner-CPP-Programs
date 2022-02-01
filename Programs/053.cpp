// C++ Program to Find the Number of Vowels, Consonants, Digits and White Spaces in a String

#include <iostream>
#include <string>
#include <map>

int main()
{
    std::cout << "Enter String: \n";
    std::string str;
    std::getline(std::cin, str);
    std::map<std::string, int> freqDist;

    std::string vowels = "aeiouAEIOU";
    std::string consonants = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";
    std::string digits = "0123456789";
    std::string whitespaces = " ";

    for ( char ch : str )
    {
        if ( vowels.find(ch) != std::string::npos ) freqDist["vowels"]++;
        else if ( consonants.find(ch) != std::string::npos ) freqDist["consonants"]++;
        else if ( digits.find(ch) != std::string::npos ) freqDist["digits"]++;
        else if ( whitespaces.find(ch) != std::string::npos ) freqDist["whitespaces"]++;
        else freqDist["specials"]++;
    }

    std::cout << "Frequency Distribution in the string is as follows -\n";
    for ( auto itr : freqDist )
        std::cout << itr.first << " : " << itr.second << std::endl;

}