/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:16:47 by moduwole          #+#    #+#             */
/*   Updated: 2023/07/11 15:16:47 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fracBits = 8;

Fixed::Fixed () : _fixedPoint(0) {

	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed (Fixed const &other) {

	std::cout << "copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed() {

	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits (void) const {

	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedPoint;
}

void	Fixed::setRawBits (int const raw) {

	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPoint = raw;
}

Fixed	&Fixed::operator=(Fixed const &other) {

	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &other)
		return *this;
	this->_fixedPoint = other.getRawBits();
	return *this;
}
