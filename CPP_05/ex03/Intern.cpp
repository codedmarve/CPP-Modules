/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 03:24:02 by moduwole          #+#    #+#             */
/*   Updated: 2023/11/01 03:27:16 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {
	std::cout << "intern default constructor called" << std::endl;
}

Intern::~Intern(void) {
	std::cout << "intern destructor called" << std::endl;
}

Intern::Intern(Intern const &src) {
	std::cout << "intern copy constructor called" << std::endl;
	*this = src;
}

Intern & Intern::operator=(Intern const &rhs) {
	(void)rhs;
	std::cout << "intern assignment operator called" << std::endl;
	return (*this);
}

AForm *returnShrubbery(std::string target) {
	return (new ShrubberyCreationForm(target));
}

AForm *returnPresidential(std::string target) {
	return (new PresidentialPardonForm(target));
}

AForm *returnRobotomy(std::string target) {
	return (new RobotomyRequestForm(target));
}

AForm * Intern::makeForm(std::string form_name, std::string target) {
	std::string arr[3] = {"ShrubberyCreationForm", "PresidentialPardonForm", "RobotomyRequestForm"};
	AForm *(*fptr[3])(std::string) = {returnShrubbery, returnPresidential, returnRobotomy};
	
	for (int i = 0; i < 3; i++) {
		if (!form_name.compare(arr[i])) {
			std::cout << "intern creates form [" + form_name + "]" << std::endl;
			return (fptr[i](target));
		}
	}
	std::cout << "intern couldn't deliver [" << form_name << "]" << std::endl;
	return NULL;
}
