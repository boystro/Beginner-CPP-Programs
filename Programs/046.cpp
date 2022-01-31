// C++ Program to Add Two Matrix Using Multi-Dimensional Array

#include <iostream>

int main()
{
    const int rows = 3, cols = 3;
    int arr1[rows][cols] = {
        { 0, 1, 2 },
        { 3, 0, 3 },
        { 2, 1, 0 }
    };
    int arr2[rows][cols] = {
        { 9, 5, 5 },
        { 5, 9, 5 },
        { 5, 5, 9 }
    };
    int arrSum[rows][cols];
    for ( int i = 0 ; i < rows ; i++ )
        for ( int j = 0 ; j < cols ; j++ )
            arrSum[i][j] = arr1[i][j] + arr2[i][j];

    for ( int i = 0 ; i < rows ; i++ )
    {
        for ( int j = 0 ; j < cols ; j++ )
            std::cout << arrSum[i][j] << " ";
        std::cout << std::endl;
    }
}