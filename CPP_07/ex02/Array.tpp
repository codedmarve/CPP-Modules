/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:39:50 by moduwole          #+#    #+#             */
/*   Updated: 2023/11/16 23:00:22 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

#include "Array.hpp"

template<typename T>
Array<T>::Array() : _size(0), _array(NULL)
{
    std::cout << "default constuctor called" << std::endl;
}

template<typename T>
Array<T>::Array(unsigned int n) : _size(n), _array(new T[n])
{
    std::cout << "size constructor called" << std::endl;
}

template<typename T>
Array<T>::Array(const Array &that) : _size(that._size), _array(new T[that._size])
{
    std::cout << "copy constructor called" << std::endl;
    for (unsigned int i = 0; i < this->_size; i++)
        this->_array[i] = that._array[i];
}

template <typename T>
Array<T>::~Array()
{
    std::cout << "destructor called" << std::endl;
    delete[] _array;
}

template <typename T>
Array<T> &Array<T>::operator=(Array const &obj)
{
    std::cout << "copy assignment operator called" << std::endl;
    this->_size = obj.size();
    if (_array)
        delete[] _array;
    this->_array = new T[this->_size];
    for (unsigned int i = 0; i < this->_size; i++)
        this->_array[i] = obj._array[i];
    return (*this);
}

template<typename T>
T   &Array<T>::operator[](unsigned int index)
{
    if (index < 0 || index > (this->_size - 1))
        throw OutOfRangeException();
    return (this->_array[index]);
}

template <typename T>
unsigned int    Array<T>::size(void) const
{
	return (this->_size);
}

template<class T>
void Array<T>::print()
{
    for (unsigned int i = 0; i < _size; i++)
    {
        std::cout << _array[i] << " ";
    }
    std::cout << std::endl;
}

template <typename T>
const char *Array<T>::OutOfRangeException::what() const throw()
{
	return ("Index out of range");
}

#endif