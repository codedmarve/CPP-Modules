/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 01:30:34 by moduwole          #+#    #+#             */
/*   Updated: 2023/11/01 03:29:08 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main()
{
	Intern guy;
	
	// pointers to abstract classes are used for polymorphism and dynamic object creation. 
	// Polymorphism allows you to work with objects of different derived classes through a 
	// common interface provided by the base class:
	AForm* rrf;
	
	rrf = guy.makeForm("ShrubberyCreationForm", "olaf bender");
	std::cout << *rrf << std::endl << std::endl;
	// delete called on 'AForm' that is abstract but has non-virtual destructor 
	// [-Werror,-Wdelete-abstract-non-virtual-dtor]
	delete rrf; // AVOID MEMORY LEAKS !!!

	rrf = guy.makeForm("PresidentialPardonForm", "olaf bender");
	std::cout << *rrf << std::endl << std::endl;
	delete rrf;

	rrf = guy.makeForm("RobotomyRequestForm", "olaf bender");
	std::cout << *rrf << std::endl << std::endl;
	delete rrf;

	rrf = guy.makeForm("someStupidForm", "olaf bender");
	if (rrf) {
   		 std::cout << *rrf << std::endl << std::endl;
    delete rrf;
	}
	
	std::cout << std::endl;
}