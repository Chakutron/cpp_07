#pragma once

#include <stdexcept>

template <typename T>
Array<T>::Array() : _array(new T()), _size(0)
{}

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n)
{
    for (unsigned int i = 0; i < _size; i++)
    {
        _array[i] = 0;
    }
}

template <typename T>
Array<T>::Array(Array const &other) : _array(new T[other.size()]), _size(other.size())
{
    for (unsigned int i = 0; i < _size; i++) 
	{
        _array[i] = other[i];
    }

}

template <typename T>
Array<T> &Array<T>::operator=(Array const &other) 
{
    if (this != &other)
    {
        delete [] _array;
        _array = new T[other.size()];
        _size = other.size();
        for (unsigned int i = 0; i < _size; i++)
        {
            _array[i] = other[i];
        }
    }
    return (*this);
}

template <typename T>
Array<T>::~Array()
{
    delete [] _array;
}

template <typename T>
T &Array<T>::operator[](unsigned int index)
{
    if (index >= _size)
        throw std::runtime_error("Index is out of bounds");
    return (_array[index]);
}

template <typename T>
const T &Array<T>::operator[](unsigned int index) const
{
    if (index >= _size)
        throw std::runtime_error("Index is out of bounds");
    return (_array[index]);
}

template <typename T>
unsigned int  Array<T>::size() const
{
    return (_size);
}