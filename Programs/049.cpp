// C++ Program to Multiply two Matrices by Passing Matrix to Function

#include <iostream>
#include <tuple>

template<int r1, int r2, int c1, int c2>
std::tuple<int**, int>  multiplyArrays(const int arr1[r1][c1], const int arr2[r2][c2])
{
    const int rM = c1;
    
    int** arrMult = new int*[rM];

    for ( int i = 0 ; i < rM ; i++ )
        arrMult[i] = new int[rM];

    if ( ! ( c1 == r2 ) )
    {
        std::cout << "Multiplication Not Possible!!!" << std::endl;
        std::tuple<int**, int> returnVal = { nullptr, 0 };
        return returnVal;
    }

    for ( int i = 0 ; i < rM ; i ++ )
        for ( int j = 0 ; j < rM ; j++ )
            {
                int prod=0;
                for ( int k = 0 ; k < r1 ; k++ )
                        prod += arr1[i][k] * arr2[j][k];
                arrMult[i][j] = prod;
            }

    std::tuple<int**, int> returnVal = { arrMult, rM };
    return returnVal;
}

int main()
{
    const int r1 = 3, c1 = 3;
    int arr1[r1][c1] = {
        { 0, 1, 2 },
        { 3, 0, 3 },
        { 2, 1, 0 }
    };

    const int r2 = 3, c2 = 3;
    int arr2[r2][c2] = {
        { 9, 5, 5 },
        { 5, 9, 5 },
        { 5, 5, 9 }
    };

    auto arrMultValues = multiplyArrays<r1, r2, c1, c2>(arr1, arr2);
    int** arrMult = std::get<0>(arrMultValues);
    int rM = std::get<1>(arrMultValues);

    for ( int i = 0 ; i < rM ; i++)
    {
        for ( int j = 0 ; j < rM ; j++ )
            std::cout << arrMult[i][j] << " ";
        std::cout << std::endl;
    }

}