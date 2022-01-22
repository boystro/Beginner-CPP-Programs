// C++ Program to Make a Simple Calculator to Add, Subtract, Multiply or Divide Using switch...case

#include <iostream>

int main()
{
    int num1, num2;
    short op;

    std::cout << "Enter Two Numbers: ";
    std::cin >> num1;
    std::cin >> num2;
    
    std::cout << "Enter Operation: ";
    std::cin >> op;

    switch (op)
    {
    case 1:
        std::cout << "Sum: " << num1 + num2 << std::endl;
        break;

    case 2:
        std::cout << "Diff: " << num1 - num2 << std::endl;
        break;

    case 3:
        std::cout << "Prod: " << num1 * num2 << std::endl;
        break;

    case 4:
        std::cout << "Quot: " << num1 / num2 << " | Rem: " << num1 % num2 << std::endl;
        break;

    default:
        std::cout << "Invalid Option!" << std::endl;
        break;
    }
}