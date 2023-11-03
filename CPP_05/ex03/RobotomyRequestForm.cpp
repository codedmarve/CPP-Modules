/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 02:20:31 by moduwole          #+#    #+#             */
/*   Updated: 2023/11/03 16:25:00 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("Robotomy Form", 72, 45), _target("default target") {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy Form", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj) : AForm(obj), _target(obj._target) {}

RobotomyRequestForm::~RobotomyRequestForm(void) {
	std::cout << getName() << "Robotomy Request Form shredded" << std::endl;
}

std::string RobotomyRequestForm::getTarget() const {
    return(_target);
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const &that) {
	this->_target = that._target;
	this->setSigned(this->getSigned());
	return (*this);
}

void    RobotomyRequestForm::executeForm(void) const
{
    std::cout << "pffssttgg... Drrrrgggg...\n";
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
            this->executeForm();
    }
    catch(const std::exception &e)
    {
        std::cerr << "Exception thrown: " << e.what() << "Robotomy failed." << std::endl;
    }
}