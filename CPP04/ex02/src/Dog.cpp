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
	this->_brain = new Brain();
}

Dog::Dog(std::string name) : Animal(name) {

	std::cout << "Dog copy constructor with arg called\n";
	this->_brain = new Brain();
}

Dog::Dog(Dog const &other) : Animal(other) {

	std::cout << "Dog copy constructor called\n";
	this->_brain = NULL;
	*this = other;
}

Dog::~Dog() {

	std::cout << "Dog destructor called\n";
	delete this->_brain;
}

Dog	&Dog::operator=(Dog const &other) {

	if (this == &other)
		return	*this;
	this->_type = other.getType();

	if (this->_brain != NULL)
		delete this->_brain;	
	this->_brain = new Brain(*other._brain);
	return	*this;
}

void	Dog::makeSound() const {

	std::cout << "Wuff Wuff...\n";
}

void	Dog::setIdeas(int index, std::string idea) {

	this->_brain->setIdeas(index, idea);
}

std::string	Dog::getIdeas(int index) {

	return this->_brain->getIdeas(index);
}