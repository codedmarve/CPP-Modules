/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:42:00 by moduwole          #+#    #+#             */
/*   Updated: 2023/11/14 15:40:40 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
private:
    unsigned int    _size;
    T               *_array;

public:
    Array();
    Array(unsigned int n);
    Array(Array const & that);
    ~Array();

    Array   &operator=(Array const &obj);
    T       &operator[](unsigned int index);

    unsigned int    size(void);
    void            print(void);
    
    class OutOfRangeException : public std::exception
    {
        public:
            virtual const char * what() const throw();
    };
};

#endif
