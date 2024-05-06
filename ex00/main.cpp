#include <iostream>
#include <string>
#include "whatever.hpp"

int main() 
{
    std::cout << "------------------------------------------------" << std::endl;
    int a = 2;
    int b = 3;
    std::cout << YELLOW << "a = " << a << ", b = " << b << NC << std::endl;
    ::swap(a, b);
    std::cout << CYAN << "swap(a, b) done.." << NC << std::endl; 
    std::cout << YELLOW << "a = " << a << ", b = " << b << NC << std::endl;
    std::cout << "min(a, b) = " << GREEN << ::min( a, b ) << NC << std::endl;
    std::cout << "max(a, b) = " << GREEN << ::max( a, b ) << NC << std::endl;
    std::cout << "------------------------------------------------" << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    std::cout << YELLOW << "c = " << c << ", d = " << d << NC << std::endl;
    ::swap(c, d);
    std::cout << CYAN << "swap(c, d) done.." << NC << std::endl; 
    std::cout << YELLOW << "c = " << c << ", d = " << d << NC << std::endl;
    std::cout << "min(c, d) = " << GREEN << ::min( c, d ) << NC << std::endl;
    std::cout << "max(c, d) = " << GREEN << ::max( c, d ) << NC << std::endl;
    std::cout << "------------------------------------------------" << std::endl;

    return (0);
}