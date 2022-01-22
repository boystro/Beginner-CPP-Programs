// C++ Program to Find All Roots of a Quadratic Equation

#include <iostream>

int main() {
    double a, b, c;

    std::cout << "Enter co-efficient of x2 x and const respectively: ";
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    double discriminant, alpha, beta;

    discriminant = pow(b, 2) + (4*a*c);

    if (discriminant==0) alpha = beta = - b/(2*a);
    else if (discriminant>0) {
        alpha = (-b + discriminant) / (2*a);
        beta = (-b - discriminant) / (2*a);
    }
    else {
        std::cout << "Discriminant less than 0, No Real Root exists" << std::endl;
        return 0;
    }

    std::cout << "alpha: " << alpha << " | beta: " << beta << std::endl;
}