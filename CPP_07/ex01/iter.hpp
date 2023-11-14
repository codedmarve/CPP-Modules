/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:01:14 by moduwole          #+#    #+#             */
/*   Updated: 2023/11/14 12:27:21 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
#define ITER_H

#include <iostream>

template<typename T>
void    iter(T *arr, size_t len, void(*f)(T const &))
{
    for (size_t i = 0; i < len; i++)
        f(arr[i]);
}

template<typename T>
void print(T const & element)
{
    std::cout << element << std::endl;
}

#endif