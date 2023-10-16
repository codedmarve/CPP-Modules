/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 02:59:52 by moduwole          #+#    #+#             */
/*   Updated: 2023/07/22 02:59:52 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog() : Animal() {

	std::cout << "Dog constructor called\n";
}

Dog::Dog(std::string name) : Animal(name) {

	std::cout << "Dog copy constructor with arg called\n";
}

Dog::Dog(Dog const &other) : Animal(other) {

	std::cout << "Dog copy constructor called\n";
	*this = other;
}

Dog::~Dog() {

	std::cout << "Dog destructor called\n";
}

Dog	&Dog::operator=(Dog const &other) {

	if (this == &other)
		return	*this;
	this->_type = other.getType();
	return	*this;
}

void	Dog::makeSound() const {
	
	std::cout << "Wuff Wuff...\n";
}