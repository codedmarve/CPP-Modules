/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 02:20:34 by moduwole          #+#    #+#             */
/*   Updated: 2023/11/03 16:34:51 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidential Pardon Form", 25, 5), _target("default target") {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidential Pardon Form", 25, 5),
    _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &that) : AForm(that),
    _target(that._target) {}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << getName() << "Presidential Pardon Form shredded" << std::endl;
}


PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &src)
{
    _target = src.getTarget();
    this->setSigned(this->getSigned());
    return (*this);
}

void    PresidentialPardonForm::executeForm(void) const
{
    std::cout <<getTarget() << " has been pardoned by Zaphod Beeblebrox.\n";
}

std::string PresidentialPardonForm::getTarget() const
{
    return(_target);
}

void PresidentialPardonForm::execute(Bureaucrat  const &executor) const
{
    try
    {
        if (!this->getSigned())
            throw(AForm::FormNotSignedException());
        else if (executor.getGrade() > this->getGradeToExec())
            throw (AForm::GradeTooLowException());
        else
            this->executeForm();
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception thrown: " << e.what() << getTarget() << " won't be pardoned.\n";
    }
}
