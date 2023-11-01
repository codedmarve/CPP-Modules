/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 02:20:31 by moduwole          #+#    #+#             */
/*   Updated: 2023/11/01 01:47:20 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("RRF", 72, 45), _target("def.target") {
	std::cout << "RRF default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RRF", 72, 45), _target(target) {
	std::cout << "RRF target assigning constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
	std::cout << "RRF default destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : AForm() {
	std::cout << "RRF copy constructor called" << std::endl;
	*this = src;
}

std::string RobotomyRequestForm::getTarget() const {
    return(_target);
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs) {
	this->setSigned(this->getSigned());
	this->_target = rhs._target;
	return (*this);
}

void    RobotomyRequestForm::executeForm(void) const
{
    std::cout << "**** LOUD NOISE ****\n";
    std::cout << getTarget() << " has been robotomized.\n";
}

void RobotomyRequestForm::execute(Bureaucrat  const &executor) const
{
    time_t t;
    try
    {
        if (!this->getSigned())
            throw(AForm::FormNotSignedException());
        else if (executor.getGrade() > this->getGradeToExec())
            throw (AForm::GradeTooLowException());
        else if (time(&t) % 2)
            throw(RobotomyRequestForm::BadLuck());
        else
        {
            this->executeForm();
            std::cout << "Bureaucrat " << executor.getGrade() << " executed " << getName() << std::endl;
        }
    }
    catch(const std::exception &e)
    {
        std::cerr << "Exception thrown: " << e.what() << "Robotomy failed." << std::endl;
    }
}