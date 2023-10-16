/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 00:35:41 by moduwole          #+#    #+#             */
/*   Updated: 2023/07/12 00:35:41 by moduwole         ###   ########.fr       */
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
	Fixed();												// Canonical
	Fixed(const int integer);
	Fixed(const float floatPoint);
	Fixed(Fixed const &other);								// Canonical
	~Fixed();												// Canonical

	Fixed				&operator=(Fixed const &other);		// Canonical
	int					getRawBits( void ) const;
	void				setRawBits(int const raw);
	float				toFloat( void ) const;
	int					toInt( void ) const;
	bool				operator>(Fixed const &other) const;
	bool				operator<(Fixed const &other) const;
	bool				operator<=(Fixed const &other) const;
	bool				operator>=(Fixed const &other) const;
	bool				operator==(Fixed const &other) const;
	bool				operator!=(Fixed const &other) const;
	Fixed				operator+(Fixed const &other) const;
	Fixed				operator-(Fixed const &other) const;
	Fixed				operator*(Fixed const &other) const;
	Fixed				operator/(Fixed const &other) const;
	Fixed				&operator++(void);
	Fixed				&operator--(void);
	Fixed				operator++(int);
	Fixed				operator--(int);
	static Fixed		&min(Fixed &point_1, Fixed &point_2);
	static const Fixed	&min(const Fixed &point_1, const Fixed &point_2);
	static Fixed		&max(Fixed &point_1, Fixed &point_2);
	static const Fixed	&max(const Fixed &point_1, const Fixed &point_2);
};

std::ostream	&operator<<(std::ostream &o, Fixed const &fixed);

#endif