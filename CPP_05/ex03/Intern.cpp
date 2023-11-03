/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 03:24:02 by moduwole          #+#    #+#             */
/*   Updated: 2023/11/03 23:53:36 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {
	std::cout << "An Intern is hired" << std::endl;
}

Intern::~Intern(void) {
	std::cout << "An intern is relieved" << std::endl;
}

Intern::Intern(Intern const &src) {
	std::cout << "Another Intern with same features is hired" << std::endl;
	*this = src;
}

Intern & Intern::operator=(Intern const &rhs) {
	(void)rhs;
	std::cout << "An Intern has been assigned features" << std::endl;
	return (*this);
}

AForm *createShrubberyForm(std::string const & target) {
	return (new ShrubberyCreationForm(target));
}

AForm *createPresidentialPardonForm(std::string const & target) {
	return (new PresidentialPardonForm(target));
}

AForm *createRobotomyRequestForm(std::string  const & target) {
	return (new RobotomyRequestForm(target));
}

AForm * Intern::makeForm(std::string formName, std::string target)
{
	std::string arr[3] = {"ShrubberyCreationForm", "PresidentialPardonForm", "RobotomyRequestForm"};
	AForm *(*fptr[3])(std::string const &) = {createShrubberyForm, \
			createPresidentialPardonForm, createRobotomyRequestForm};

	for (int i = 0; i < 3; i++) {
		if (!formName.compare(arr[i])) {
			std::cout << "intern creates " << formName << std::endl;
			return (fptr[i](target));
		}
	}
	std::cout << "intern couldn't create" << formName << std::endl;
	return NULL;
}
