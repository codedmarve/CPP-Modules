/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scan.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 00:08:03 by moduwole          #+#    #+#             */
/*   Updated: 2023/11/21 14:32:18 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <numeric>
// #include <iterator>
// #include <limits>

class Span {
	private:
		unsigned int		_N;
		std::vector<int>	_vec;

	public:
		Span();
		Span(unsigned int N);
		Span(Span const &that);
		~Span();

		Span & operator=(Span const &obj);
		
		void 	addNumber(int number);
		int 	shortestSpan();
		int 	longestSpan();

		void	addRange(std::vector<int>::const_iterator begin,
							std::vector<int>::const_iterator end);

		void 	fillConsecutiveNumbers();
		void 	fillRandomNumbers();
		void	printElements();

		class MaxSizeException: public std::exception{
            public:
                virtual const char *what() const throw();
        };

        class NoSpanException: public std::exception{
            public:
                virtual const char *what() const throw();
        };
};

#endif