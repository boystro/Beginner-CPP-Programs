// C++ Program to Find Largest Element of Array

#include <iostream>
#include <array>

template<long unsigned int size>
int largest(std::array<int, size>  arr)
{
    int largest = arr[0];
    
    for ( int num : arr )
        if ( largest < num )
            largest = num;

    return largest;
}

int main()
{
    std::array<int, 5> arr = { 1, 2, 3, 4, 5 };
    std::cout << "Largest: " << largest(arr) << std::endl;
}