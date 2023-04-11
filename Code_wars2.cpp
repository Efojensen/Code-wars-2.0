#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::cout <<"Enter in a string.\n";
    std::string text;
    getline(std::cin, text);
    std::cout << text;
    std::vector <char> container;

    for(int i = 0; i < text.length(); i++)
    {
        container.push_back(text[i]);
    }
    std::cout << std::endl;

    for(int j: container)
    {
        if(j > 64 && j < 91)
        {
            j -=64;
            std::cout << j;
        }
        else if (j > 96 && j < 123)
        {
            j -= 96;
            std::cout << j;
        }
        std::cout <<" ";
    }
}