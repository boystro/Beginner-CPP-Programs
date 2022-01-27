// C++ Program to Access Elements of Array Using Pointer

#include <iostream>

int main()
{
    int arrSize = 5;
    int arr[5] = { 1, 2, 3, 4, 5 };
    int *arrPointer = arr;

    for ( int i = 0 ; i < arrSize ; i++ )
        std::cout << *( arrPointer + i ) << " ";
}