// C++ Program to Check Wheater a character is Vowel or Consonant

#include <iostream>

int main() {
    char c;

    std::cout << "Enter a character: ";
    std::cin >> c;

    for (char vowel : "aeiou")
        if (c == vowel) {
            std::cout << c << " is Vowel." << std::endl;
            return 0;
        }

    std::cout << c << " is not Vowel." << std::endl;
}