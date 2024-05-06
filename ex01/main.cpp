#include <string>
#include <iostream>
#include "iter.hpp"

void    asterisks(unsigned int &num) 
{
    unsigned int i = 0;

    std::cout << "[" << YELLOW;
    while (i < num)
    {
        std::cout << "*";
        i++;
    }
    std::cout << NC << "]" << std::endl;
}

void    uppercase(std::string &str) 
{
    size_t i = 0;

    while (i < str.size())
    {
        str[i] = std::toupper(str[i]);
        i++;
    }
    std::cout << CYAN << str << NC << std::endl;
}

void    showResults(bool &answer)
{
    if (answer)
        std::cout << std::boolalpha << GREEN;
    else
        std::cout << std::boolalpha << RED;
    std::cout << answer << NC << std::endl;
}

int main() 
{
    std::cout << "------------------------------------------------" << std::endl;
    unsigned int numbers[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    ::iter(numbers, 10, asterisks);
    std::cout << "------------------------------------------------" << std::endl;
    std::string names[] = {"chaku", "trorioll", "theouche", "adriano"};
    ::iter(names, 4, uppercase);
    std::cout << "------------------------------------------------" << std::endl;
    bool answers[] = {1, 0, 1, 1, 0};
    iter<bool>(answers, 5, showResults);    
    std::cout << "------------------------------------------------" << std::endl;

    return (0);
}