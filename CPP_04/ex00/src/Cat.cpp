/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 03:09:34 by moduwole          #+#    #+#             */
/*   Updated: 2023/07/22 03:09:34 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat() : Animal() {

	std::cout << "Cat constructor called\n";
}

Cat::Cat(std::string name) : Animal(name) {

	std::cout << "Cat copy constructor with arg called\n";
}

Cat::Cat(Cat const &other) : Animal(other) {

	std::cout << "Cat copy constructor called\n";
	*this = other;
}

Cat::~Cat() {

	std::cout << "Cat destructor called\n";
}

Cat	&Cat::operator=(Cat const &other) {

	if (this == &other)
		return	*this;
	this->_type = other.getType();
	return	*this;
}

void	Cat::makeSound() const {
	
	std::cout << "meow meow...\n";
}