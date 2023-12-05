/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:07:16 by moduwole          #+#    #+#             */
/*   Updated: 2023/12/05 14:56:34 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &src)
{
	_vec = src._vec;
	_deq = src._deq;
}

PmergeMe& PmergeMe::operator=(const PmergeMe &src)
{
	_vec = src._vec;
	_deq = src._deq;
	return (*this);
}

void PmergeMe::parseInput(int ac, char **av)
{
	for (int i = 1; i < ac; ++i)
    {
		std::stringstream ss(av[i]);
		int nb = 0;
		
		if (!(ss >> nb) || !ss.eof()) 
			throw ErrorException();
		if (nb < 0)
			throw ErrorException();
		_vec.push_back(nb);
		_deq.push_back(nb);
	}
}

void PmergeMe::printContainer()
{
	for(size_t i = 0; i < _vec.size(); i++)
    {
		std::cout << _vec[i] << " ";
		if (_vec[i] != _deq[i])
			throw ErrorException();
	}
	std::cout << "\n";
}

void PmergeMe::sortVector()
{
    mergeInsertSort(_vec, 0, _vec.size() - 1);
}

void PmergeMe::sortDeque() 
{
    mergeInsertSort(_deq, 0, _deq.size() - 1);
}

const char *PmergeMe::ErrorException::what() const throw()
{
    return("Error\n");
}