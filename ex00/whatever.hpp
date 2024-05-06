#pragma once

#define RED "\e[31m"
#define GREEN "\e[32m"
#define YELLOW "\e[33m"
#define BLUE "\e[34m"
#define VIOLET "\e[35m"
#define CYAN "\e[36m"
#define NC "\e[0m"

template <typename T>
void    swap(T &a, T &b)
{
    T   tmp;

    tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
T   min(T &a, T &b)
{
    return (a < b ? a : b);
}

template <typename T>
T   max(T &a, T &b)
{
    return (a > b ? a : b);
}