// C++ Program to Store Information of a Student in a Structure

#include <iostream>

struct Student
{
    std::string nam;
    short age;
    short cls;
    char sex;
};

int main()
{
    Student st1 = {"Jake Bowser", 15, 9, 'M'};

    std::cout << "NAM: " << st1.nam << "\n";
    std::cout << "AGE: " << st1.age << "\n";
    std::cout << "CLS: " << st1.cls << "\n";
    std::cout << "SEX: " << st1.sex << "\n";
}

