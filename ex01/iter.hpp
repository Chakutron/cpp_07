#pragma once

#define RED "\e[31m"
#define GREEN "\e[32m"
#define YELLOW "\e[33m"
#define BLUE "\e[34m"
#define VIOLET "\e[35m"
#define CYAN "\e[36m"
#define NC "\e[0m"

template <typename T>
void    iter(T *array, size_t lenght, void (*f)(T &))
{
    size_t  i = 0;
    
    while (i < lenght)
    {
        f(array[i]);
        i++;
    }
}