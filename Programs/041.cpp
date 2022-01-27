// C++ Program to Reverse a Sentence Using Recursion

#include <iostream>
#include <string>

void reverseString( std::string& inp, std::string& rev)
{
    if ( inp == "" )
        return;
    rev += inp.back();
    inp.pop_back();
    reverseString( inp, rev);
}

int main() 
{
    std::string inp = "a quick brown fox jumped over the lazy dog";
    std::string rev=""; // Reverse string comes here
    reverseString(inp, rev);
    std::cout << rev << std::endl;
}