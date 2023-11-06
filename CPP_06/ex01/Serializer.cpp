/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 08:52:29 by moduwole          #+#    #+#             */
/*   Updated: 2023/11/06 09:06:23 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {
    std::cout << "serializer default constructor called.\n";
}

Serializer::Serializer(Serializer   const &src) {
    *this = src;
}

Serializer::~Serializer() {
    std::cout << "Serializer destructor called.\n";
}

Serializer  &Serializer::operator=(Serializer   const &obj)
{
    std::cout << "Serializer copy assignment is called.\n"; 
    (void)obj;   
    return (*this);
}

uintptr_t   Serializer::serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw);
}
