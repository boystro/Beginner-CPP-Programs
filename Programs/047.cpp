// C++ Program to Multiply Two Matrix Using Multi-Dimensional Arrays

#include <iostream>

int main()
{
    const int rows1 = 3, cols1 = 3;
    int arr1[rows1][cols1] = {
        { 0, 1, 2 },
        { 3, 0, 3 },
        { 2, 1, 0 }
    };

    const int rows2 = 3, cols2 = 3;
    int arr2[rows2][cols2] = {
        { 9, 5, 5 },
        { 5, 9, 5 },
        { 5, 5, 9 }
    };

    if ( ! ( cols1 == rows2 ) )
    {
        std::cout << "Multiplication Not Possible!!!" << std::endl;
        return 0;
    }

    const int rowsMult = cols1;
    int arrMult[rowsMult][rowsMult];

    for ( int i = 0 ; i < rowsMult ; i ++ )
        for ( int j = 0 ; j < rowsMult ; j++ )
            {
                int prod=0;
                for ( int k = 0 ; k < rows1 ; k++ )
                        prod += arr1[i][k] * arr2[j][k];
                arrMult[i][j] = prod;
            }
    
    for ( int i = 0 ; i < rowsMult ; i++)
    {
        for ( int j = 0 ; j < rowsMult ; j++ )
            std::cout << arrMult[i][j] << " ";
        std::cout << std::endl;
    }

}