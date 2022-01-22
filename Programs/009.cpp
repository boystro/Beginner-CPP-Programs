// C++ Program to Find Largest Number Among Three Numbers

#include <iostream>

int main() {
    int arr[3];

    std::cout << "Enter 3 numbers: ";
    std::cin >> arr[0];
    std::cin >> arr[1];
    std::cin >> arr[2];

    int largest = arr[0];
    for (int n : arr)
        if (largest < arr[n])
            largest = arr[n];

    std::cout << "Largest number is " << largest << std::endl;
}