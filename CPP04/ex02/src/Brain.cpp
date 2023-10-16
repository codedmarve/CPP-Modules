/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 10:53:11 by moduwole          #+#    #+#             */
/*   Updated: 2023/07/22 10:53:11 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

Brain::Brain() {

	std::cout << "Brain constructor called\n";
	for (int i = 0; i < 100; i++)
		_ideas[i] = "idea";
}

Brain::Brain(Brain const &brain) {

	std::cout << "Brain copy constructor called\n";
	*this = brain;
}

Brain::~Brain() {

	std::cout << "Brain destructor called\n";
}

Brain	&Brain::operator=(Brain const &brain) {

	if (this == &brain)
		return *this;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = brain._ideas[i];
	return *this;
}

void	Brain::setIdeas(int index, std::string idea) {

	if (index < 0 || index > 99)
	{
		std::cout << "Error: index must be between 0 and 99!\n";
		return ;
	}
	this->_ideas[index] = idea;
}

std::string	Brain::getIdeas(int index) {

	if (index < 0 || index > 99)
	{
		std::cout << "Wrong index has to be between 0 and 99!\n";
		return "";
	}
	return this->_ideas[index];
}
