// C++ Program to Swap Numbers in Cyclic Order Using Call by Reference

#include <iostream>

void cyclicSwap(int*& array, int arraySize)
{
    int temp = array[ arraySize - 1 ];
    for ( int i = arraySize - 1 ; i > 0 ; i-- )
        array[ i ] = array[ i - 1 ];
    array[ 0 ] = temp;
}

int main()
{
    int n;
    std::cout << "Enter number of numbers you want to enter: ";
    std::cin >> n;

    std::cout << "Enter the numbers by leaving a space in between: ";
    int* arr = new int[n];
    for ( int i = 0 ; i < n ; i++ )
        std::cin >> arr[i];

    std::cout << std::endl;
    std::cout << "Numbers Before Swap" << std::endl;
    for ( int i = 0 ; i < n ; i++ )
        std::cout << arr[i] << ", ";
    std::cout << std::endl;

    cyclicSwap(arr, n);

    std::cout << "Numbers After Swap" << std::endl;
    for ( int i = 0 ; i < n ; i++ )
        std::cout << arr[i] << ", ";
    std::cout << std::endl;
}