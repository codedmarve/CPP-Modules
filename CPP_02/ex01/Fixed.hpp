/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:07:12 by moduwole          #+#    #+#             */
/*   Updated: 2023/07/11 15:07:12 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <math.h>

class Fixed {
private:
	int 				_fixedPoint;
	static const int	_fracBits;

public:
	Fixed();								// Canonical
	Fixed(const int integer);
	Fixed(const float floatPoint);
	Fixed(Fixed const &other);					// Canonical
	~Fixed();									// Canonical

	Fixed	&operator=(Fixed const &other);		// Canonical
	int		getRawBits( void ) const;
	void	setRawBits(int const raw);
	float	toFloat( void ) const;
	int		toInt( void ) const;
};

std::ostream	&operator<<(std::ostream &o, Fixed const &fixed);

#endif