/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 02:53:16 by moduwole          #+#    #+#             */
/*   Updated: 2023/07/12 02:53:16 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point (const float x, const float y) : _x(x), _y(y) {}

Point::Point(Point const &other) {

	*this = other;
}

Point::~Point () {}

Point	&Point::operator=(Point const &other) {

	if (this == &other)
		return *this;
	(Fixed)this->_x = other.getX();
	(Fixed)this->_y = other.getY();
	return *this;
} 

Fixed const &Point::getX(void) const {

	return this->_x;
}

Fixed const &Point::getY(void) const {

	return this->_y;
}
