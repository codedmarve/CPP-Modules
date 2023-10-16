/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 02:21:32 by moduwole          #+#    #+#             */
/*   Updated: 2023/07/12 02:21:32 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main(void)
{
	Point a(0.0, 0.0);
	Point b(5.0, 0.0);
	Point c(0.0, 5.0);
	Point p(6.0, 2.0);

	if (bsp(a, b, c, p))
		std::cout << "Point is part of the triangle." << std::endl;
	else
		std::cout << "Point is not part of the triangle." << std::endl;
}