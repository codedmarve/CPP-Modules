/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 02:17:49 by moduwole          #+#    #+#             */
/*   Updated: 2023/11/07 01:42:18 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER
#define SCALARCONVERTER

#include <iostream>
#include <cctype> // For std::isprint
#include <cstdlib> // For std::atof
#include <limits> // For numeric_limits
#include <climits> // max_min
#include <cmath> // fmod

enum type
{
    INT,
    FLOAT,
    DOUBLE,
    CHAR,
    PSEUDO,
    INVALID,
};

class ScalarConverter {
	private:
        ScalarConverter();
        ~ScalarConverter();
        ScalarConverter(ScalarConverter const &that);

		ScalarConverter &operator=(ScalarConverter const &that);

    public:
        static void convert(std::string const &str);
};

#endif
