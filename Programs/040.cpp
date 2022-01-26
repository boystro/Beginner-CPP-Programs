// C++ Program to Convert Binary Number to Octal and Vice Versa

#include <iostream>
#include <string>
#include <map>

std::map<std::string, char> oct_bin = {
    { "000" , '0' },
    { "001" , '1' },
    { "010" , '2' },
    { "011" , '3' },
    { "100" , '4' },
    { "101" , '5' },
    { "110" , '6' },
    { "111" , '7' },
};

std::map<char, std::string> bin_oct = {
    { '0' , "000" },
    { '1' , "001" },
    { '2' , "010" },
    { '3' , "011" },
    { '4' , "100" },
    { '5' , "101" },
    { '6' , "110" },
    { '7' , "111" },
};

std::string binToOct(std::string bin)
{
    int binLength = bin.length();
    // Making the length of binary number divisible by 3
    {    
        std::string temp = "";
        int zeroes = ( binLength % 3 ) ? ( 3 - ( binLength % 3) ) : 0;
        for ( int i = 0 ; i < zeroes ; i++ )
        {
            temp = "0";
            bin = temp + bin;
        }
        binLength = bin.length();
    }
    std::string returnValue="";

    // Making every 3 binary digit to octal
    {
        std::string tempBin="";
        for ( int i = 0 ; i < binLength ; i++ )
        {
            tempBin += bin[i];
            if ( ( i + 1 ) % 3 == 0 )
            {
                returnValue += oct_bin[tempBin];
                tempBin="";
            }
        }
    }

    return returnValue;
}

std::string octToBin(std::string oct)
{
    std::string returnValue="";
    for (char digit : oct)
        returnValue += bin_oct[digit];

    // Remove Leading 0s
    {
        while ( returnValue[0] == '0' )
        {
            for ( int i = 0 ; i < returnValue.length() - 1 ; i++ )
                returnValue[i] = returnValue[i+1];
            returnValue.pop_back();
        }
    }

    return returnValue;
}


int main() {
    std::cout << binToOct("1001001001") << std::endl;
    std::cout << octToBin("153") << std::endl;
}