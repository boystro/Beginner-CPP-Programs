// C++ Program to Calculate Average of Numbers Using Arrays

#include <iostream>
#include <array>

template<long unsigned int size>
int avg(std::array<int, size> arr)
{
    float sum = 0.0f, count = 0.0f;
    for ( int num : arr )
    {
        sum += num;
        count++;
    }
    return sum / count;
}


int main()
{
    std::array<int, 5> arr = { 1, 2, 3, 4, 5 };
    std::cout << avg(arr) << std::endl;
}