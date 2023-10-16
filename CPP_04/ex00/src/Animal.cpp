/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 21:06:21 by moduwole          #+#    #+#             */
/*   Updated: 2023/07/21 21:06:21 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

Animal::Animal() : _type("default name") {

	std::cout << "Animal constructor called" << std::endl; 
}

Animal::Animal(std::string name) : _type(name) {

	std::cout << "Animal constructor with type called\n";
}

Animal::Animal (Animal const &other) {

	*this = other;
	std::cout << "Animal copy constructor called\n";
}

Animal::~Animal() {

	std::cout << "Animal destructor called\n";
}

Animal &Animal::operator=(Animal const &other) {

	if (this == &other)
		return *this;
	this->_type = other.getType();
	return *this;
}

void	Animal::setType(std::string type) {

	this->_type = type;
}

std::string	Animal::getType(void) const {

	return this->_type;
}

void	Animal::makeSound() const {

	std::cout << "Animal sound...\n";
}