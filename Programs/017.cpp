// C++ Program to Find LCM

#include <iostream>

int main() {
    int a,b;

    std::cout << "Enter two numbers: ";
    std::cin >> a;
    std::cin >> b;

    int lcm=1;
    do lcm++; while (!(lcm%a==0 && lcm%b==0));
    
    std::cout << "LCM for " << a << " and " << b << " is " << lcm << std::endl;
}