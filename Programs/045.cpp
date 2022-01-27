// C++ Program to Calculate Standard Deviation

#include <iostream>
#include <array>
#include <cmath>

template<long unsigned int size>
float standardDeviation(std::array<float, size>& dataPoints)
{
    // STEP 1 : Find the mean of all Data Points
    float dataPointsSum = 0;
    for ( float dataPoint : dataPoints )
        dataPointsSum += dataPoint;

    float dataPointMean = dataPointsSum / size;

    // STEP 2 : Find the sqaure of distances from the mean to each Data Point
    std::array<float, size> distancesSquared;
    for ( int i = 0 ; i < size ; i++ )
        distancesSquared[i] = pow( dataPoints[i] - dataPointMean, 2 );

    // STEP 3 : Find the Mean of Distance Squared to mean of each Data Point
    float distancesSquaredSum = 0;
    for ( float distanceSquared : distancesSquared )
        distancesSquaredSum += distanceSquared;

    float distancesSquaredMean = distancesSquaredSum / size;

    // STEP 4 : Take the square root
    float StandardDeviation = sqrt( distancesSquaredMean );

    return StandardDeviation;
}

template<typename T, long unsigned int size>
std::ostream& operator<<(std::ostream& stream, const std::array<T, size>& arr)
{
    for ( T data : arr )
        stream << data << " ";
    return stream;
}

int main()
{
    std::array<float, 10> dataPoints = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    std::cout << "Array : " << dataPoints << std::endl;
    std::cout << "Standard Deviation : " << standardDeviation(dataPoints) << std::endl;
}