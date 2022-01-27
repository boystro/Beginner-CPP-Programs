// C++ Program to Calculate Power Using Recursion

#include <iostream>

int power(int base, int exponent)
{
    if ( exponent == 0 )
        return 1;
    exponent--;
    return base * power( base , exponent );
}

int main()
{
    std::cout << power( 10 , 3 ) << std::endl;
}