// Increment++ and Decrement-- Operator Overloading in C++

#include <iostream>

struct EvenNumber
{
    unsigned int n;
    EvenNumber() : n(2) {}
    EvenNumber(const unsigned int x) {
        if ( x % 2 == 0 ) n = x;
        else n = x + 1;
    }

    void operator++(int) {
        n += 2;
    }
};

int main() {
    EvenNumber evenNum;
    std::cout << "Value of n: " << evenNum.n << std::endl;
    evenNum++;
    std::cout << "Value of n: " << evenNum.n << std::endl;
}