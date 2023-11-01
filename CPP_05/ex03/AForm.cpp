/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 02:44:24 by moduwole          #+#    #+#             */
/*   Updated: 2023/11/01 01:39:30 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("Course"), _signed(false),
                _gradeToSign(150), _gradeToExec(150)
{
            std::cout << getName() << " AForm with sign grade " \
                << getGradeToSign() << " and execution grade " << getGradeToExec() << " is printed" << std::endl;
}

AForm::AForm(std::string name, int gts, int gte) : _name(name),
        _signed(false), _gradeToSign(gts), _gradeToExec(gte)
{
    try
    {
        if (gts > 150 || gte > 150)
            throw AForm::GradeTooLowException();
        else if (gts < 1 || gte < 1)
            throw AForm::GradeTooHighException();
        else
        {
            std::cout << getName() << " AForm with sign grade " \
                << getGradeToSign() << " and execution grade " << getGradeToExec() << " is printed" << std::endl;
        }
    }
    catch (const std::exception &ex)
    {
        std::cerr << "Exception thrown for " << getName() << " AForm " << ex.what();
    }
}

AForm::AForm(AForm const &other) : _name(other._name), _signed(other._signed), \
             _gradeToSign(other._gradeToSign), _gradeToExec(other._gradeToExec)
{
            std::cout << getName() << " AForm  with sign grade " \
                << getGradeToSign() << " and execution grade " << getGradeToExec() << " is photocopied" << std::endl;
}

AForm::~AForm()
{
    std::cout << getName() << " AForm " << "shredded" << std::endl;
}

AForm &	AForm::operator=(AForm const & obj)
{
	_signed = obj.getSigned();
	return (*this);
}

const char *    AForm::GradeTooHighException::what() const throw()
{
    return (": grade cannot be higher than 1\n");
}

const char *    AForm::GradeTooLowException::what() const throw()
{
    return (": grade cannot be lower than 150\n");
}

const char *    AForm::FormNotSignedException::what() const throw()
{
    return("the form is not signed and cannot be executed.\n");
}


std::string     AForm::getName(void) const
{
    return (_name);
}

bool     AForm::getSigned(void) const
{
    return (_signed);
}

void    AForm::setSigned(bool sign)
{
    _signed = sign;
}

int     AForm::getGradeToSign(void) const
{
    return (_gradeToSign);
}

int AForm::getGradeToExec(void) const
{
    return (_gradeToExec);
}

void    AForm::beSigned(Bureaucrat const &obj)
{
    if (obj.getGrade() <= getGradeToSign())
        _signed = true;
    else
        throw AForm::GradeTooLowException();
}

std::ostream    &operator<<(std::ostream &o, AForm const &obj)
{
    if (obj.getSigned())
    {
        return (o << obj.getName() << " AForm" << ":\nRequired grade to sign is " << obj.getGradeToSign() \
            << "\nRequired grade to execute is " << obj.getGradeToExec() << "\nForm status: signed\n");
    }
    else
    {
        return (o << obj.getName() << " AForm" << ":\nRequired grade to sign is " << obj.getGradeToSign() \
            << "\nRequired grade to execute is " << obj.getGradeToExec() << "\nForm status: not signed\n");
    }
}