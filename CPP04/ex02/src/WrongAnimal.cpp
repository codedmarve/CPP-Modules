/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 03:56:28 by moduwole          #+#    #+#             */
/*   Updated: 2023/07/22 03:56:28 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("default name") {

	std::cout << "WrongAnimal constructor called" << std::endl; 
}

WrongAnimal::WrongAnimal(std::string name) : _type(name) {

	std::cout << "WrongAnimal constructor with type called\n";
}

WrongAnimal::WrongAnimal (WrongAnimal const &other) {

	*this = other;
	std::cout << "WrongAnimal copy constructor called\n";
}

WrongAnimal::~WrongAnimal() {

	std::cout << "WrongAnimal destructor called\n";
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &other) {

	if (this == &other)
		return *this;
	this->_type = other.getType();
	return *this;
}

void	WrongAnimal::setType(std::string type) {

	this->_type = type;
}

std::string	WrongAnimal::getType(void) const {

	return this->_type;
}

void	WrongAnimal::makeSound() const {

	std::cout << "WrongAnimal sound...\n";
}