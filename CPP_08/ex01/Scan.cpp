/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scan.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 00:08:59 by moduwole          #+#    #+#             */
/*   Updated: 2023/11/21 16:56:42 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scan.hpp"

Span::Span() : _N(0) {}

Span::Span(unsigned int N) : _N(N) {}

Span::~Span() {}

Span::Span(Span const &that) : _N(that._N) 
{
	this->_vec.clear();
    this->_vec.insert(this->_vec.begin(), that._vec.begin(), that._vec.end());
}

Span & Span::operator=(Span const &obj)
{
	if (this != & obj)
    {
		this->_N = obj._N;
		this->_vec.clear();
		this->_vec.insert(this->_vec.begin(), obj._vec.begin(), obj._vec.end());
	}
	return (*this);
}

void Span::addNumber(int number)
{
    if(_vec.size() >= _N)
        throw MaxSizeException();
    _vec.push_back(number);
}

int Span::shortestSpan()
{
    int spanMin;

    if (_vec.size() < 2)
        throw NoSpanException();
    std::vector<int>    sorted(this->_vec);
    std::sort(sorted.begin(), sorted.end());
    std::vector<int>	difference(this->_vec.size());
    std::adjacent_difference(sorted.begin(), sorted.end(), difference.begin());
	spanMin = *std::min_element((difference.begin()), difference.end());
	return (spanMin);
}

int Span::longestSpan()
{
    if (_vec.size() < 2)
        throw NoSpanException();
    int min = *std::min_element(_vec.begin(), _vec.end());
    int max = *std::max_element(_vec.begin(), _vec.end());
    return (max - min);
}

void Span::addRange(std::vector<int>::const_iterator begin,
                        std::vector<int>::const_iterator end)
{
    for (std::vector<int>::const_iterator it = begin; it != end; ++it)
        addNumber(*it);
}

void Span::fillConsecutiveNumbers()
{
    std::vector<int> consecutiveNumbers(_N);
    for (unsigned int i = 0; i < _N; i++) {
        consecutiveNumbers[i] = i;
    }
    addRange(consecutiveNumbers.begin(), consecutiveNumbers.end());
}

void Span::fillRandomNumbers() {
    std::vector<int> randomNumbers(_N);
    srand(time(NULL));
    for (unsigned int i = 0; i < _N; i++)
    {
        randomNumbers[i] = rand();
    }
    addRange(randomNumbers.begin(), randomNumbers.end());
}

void    Span::printElements() {
	int idx = 0;
    for(std::vector<int>::iterator it = _vec.begin(); it != _vec.end(); it++)
    {
		std::cout << "ELEMENT " << idx << "	" << *it << std::endl;
		idx++;
	}
}

const char *Span::MaxSizeException::what() const throw()
{
    return(">>>>> exception: max size reached <<<<<");
}

const char *Span::NoSpanException::what() const throw()
{
    return(">>>>> exception: no span <<<<<");
}