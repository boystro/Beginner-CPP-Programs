// C++ Program to Find Transpose of a Matrix

#include <iostream>

int main()
{
    const int rows = 3, cols = 3;
    int arr[rows][cols] = {
        { 0, 1, 2 },
        { 3, 0, 3 },
        { 2, 1, 0 }
    };

    int arrTranspose[cols][rows];

    for ( int i = 0 ; i < rows ; i++ )
        for ( int j = 0 ; j < cols ; j++ )
            arrTranspose[j][i] = arr[i][j];

    for ( int i = 0 ; i < rows ; i++ )
    {
        for ( int j = 0 ; j < cols ; j++ )
            std::cout << arrTranspose[i][j] << " ";
        std::cout << std::endl;
    }
}