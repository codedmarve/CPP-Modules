/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 23:31:44 by moduwole          #+#    #+#             */
/*   Updated: 2023/07/11 23:31:44 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fracBits = 8;

Fixed::Fixed() : _fixedPoint(0) {

	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int integer) {

	std::cout << "Int constructor called" << std::endl;
	this->_fixedPoint = integer << Fixed::_fracBits;
}

Fixed::Fixed(const float floatPoint) {

	std::cout << "Float constructor called" << std::endl;
	this->_fixedPoint = round(floatPoint * (1 << Fixed::_fracBits));
}

Fixed::Fixed(Fixed const &other) {

	std::cout << "copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed() {

	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const &other) {

	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &other)
		return *this;
	this->_fixedPoint = other.getRawBits();
	return *this;
}

int	Fixed::getRawBits( void ) const {

	return this->_fixedPoint;
}

void	Fixed::setRawBits(int const raw) {

	this->_fixedPoint = raw;
}

float	Fixed::toFloat( void ) const {

	return (float)this->_fixedPoint / (float) (1 << Fixed::_fracBits);
}

int	Fixed::toInt ( void ) const {

	return this->_fixedPoint >> Fixed::_fracBits;
}

std::ostream	&operator<<(std::ostream &o, Fixed const &fixed) {

	return o << fixed.toFloat();
}
