// C++ Program to Display Fibonacci Series

#include <iostream>

int main() {
    int n;

    std::cout << "Enter number: ";
    std::cin >> n;

    int last=0, now=1, temp;
    for (int i=0; i < n; i++){
        std::cout << now << " ";
        temp = now;
        now += last;
        last = temp;
    }
}