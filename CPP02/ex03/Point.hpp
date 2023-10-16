/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 02:40:30 by moduwole          #+#    #+#             */
/*   Updated: 2023/07/12 02:40:30 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class Point {
private:
	Fixed const _x;
	Fixed const _y;

public:
	Point();										//canonical
	Point(float const x, float const y);		
	Point(Point const &other);						//canonical
	~Point();										//canonical

	Point		&operator=(Point const &other);		//canonical
	Fixed const	&getX(void) const;
	Fixed const	&getY(void) const;
};

bool	bsp( Point const a, Point const b, Point const c, Point const point);

#endif