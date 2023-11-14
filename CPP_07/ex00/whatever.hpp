/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:19:15 by moduwole          #+#    #+#             */
/*   Updated: 2023/11/14 11:45:20 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVET_H
#define WHATEVET_H

#include <iostream>

template<typename T>
void    swap(T &x, T &y)
{
    T   tmp = x;
    x = y;
    y = tmp;
}

template<typename T>
T const & min(T const & x, T const & y)
{
    return (x < y ? x : y);
}

template<typename T>
T const & max(T const & x, T const & y)
{
    return (x > y ? x : y);
}

#endif