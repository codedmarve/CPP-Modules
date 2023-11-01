/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 02:20:34 by moduwole          #+#    #+#             */
/*   Updated: 2023/11/01 01:27:52 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
    _target = "default target";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
    _target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << getName() << " is torn apart.\n";
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm    const &src) : AForm(src.getName(), src.getGradeToSign(), src.getGradeToExec()) 
{
    *this = src;
    std::cout << "PresidentialPardonForm copy constrcutor called.\n";
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &src)
{
    _target = src.getTarget();
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
        std::cout << "Bureaucrat " << executor.getName() << " executed " << this->getName() << "\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception thrown: " << e.what() << " PresidentialPardonForm execution faild.\n";
    }
}
