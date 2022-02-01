// C++ Program to Sort Elements in Lexicographical Order (Dictionary Order)

#include <iostream>
#include <string>

int main()
{
    int num;
    std::cout << "Enter number of words: ";
    std::cin >> num;

    std::cout << "Enter String: \n";
    std::string** words = new std::string*[num];
    for ( int i = 0 ; i < num ; i++ )
    {
        words[i] = new std::string();
        std::cin >> *( words[i] );
    }
    
    std::string* temp;
    for ( int i = 0 ; i < num - 1 ; i++ )
        for ( int j = 0 ; j < num - 1 ; j++ )
            if ( *( words[j] ) > *( words[j+1] ) )
                {
                    temp = words[j];
                    words[j] = words[j+1];
                    words[j+1] = temp;
                }

    for ( int i = 0 ; i < num ; i++ )
        std::cout << words[i] << " | " << *( words[i] ) << std::endl;

    // Since array was heap allocated it needs to be manually freed
    for ( int i = 0 ; i < num ; i++ )
        delete words[i];    
    delete[] words;
}