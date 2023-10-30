/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 21:12:07 by moduwole          #+#    #+#             */
/*   Updated: 2023/10/30 01:10:44 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Course"), _signed(false),
                _gradeToSign(150), _gradeToExec(150)
{
            std::cout << getName() << " Form with sign grade " \
                << getGradeToSign() << " and execution grade " << getGradeToExec() << " is printed" << std::endl;
}

Form::Form(std::string name, int gts, int gte) : _name(name),
        _signed(false), _gradeToSign(gts), _gradeToExec(gte)
{
    try
    {
        if (gts > 150 || gte > 150)
            throw Form::GradeTooLowException();
        else if (gts < 1 || gte < 1)
            throw Form::GradeTooHighException();
        else
        {
            std::cout << getName() << " Form with sign grade " \
                << getGradeToSign() << " and execution grade " << getGradeToExec() << " is printed" << std::endl;
        }
    }
    catch (const std::exception &ex)
    {
        std::cerr << "Exception thrown for " << getName() << " Form " << ex.what();
    }
}

Form::Form(Form const &other) : _name(other._name), _signed(other._signed), \
             _gradeToSign(other._gradeToSign), _gradeToExec(other._gradeToExec)
{
            std::cout << getName() << " Form  with sign grade " \
                << getGradeToSign() << " and execution grade " << getGradeToExec() << " is photocopied" << std::endl;
}

Form::~Form()
{
    std::cout << getName() << " Form " << "shredded" << std::endl;
}

Form &	Form::operator=(Form const & obj)
{
	_signed = obj.getSigned();
	return (*this);
}

const char *    Form::GradeTooHighException::what() const throw()
{
    return (": grade cannot be higher than 1\n");
}

const char *    Form::GradeTooLowException::what() const throw()
{
    return (": grade cannot be lower than 150\n");
}

std::string     Form::getName(void) const
{
    return (_name);
}

int     Form::getSigned(void) const
{
    return (_signed);
}

int     Form::getGradeToSign(void) const
{
    return (_gradeToSign);
}

int Form::getGradeToExec(void) const
{
    return (_gradeToExec);
}

void    Form::beSigned(Bureaucrat const &obj)
{
    if (obj.getGrade() <= getGradeToSign())
        _signed = true;
    else
        throw Form::GradeTooLowException();
}

std::ostream    &operator<<(std::ostream &o, Form const &obj)
{
    if (obj.getSigned())
    {
        return (o << obj.getName() << " Form" << ":\nRequired grade to sign is " << obj.getGradeToSign() \
            << "\nRequired grade to execute is " << obj.getGradeToExec() << "\nForm status: signed\n");
    }
    else
    {
        return (o << obj.getName() << " Form" << ":\nRequired grade to sign is " << obj.getGradeToSign() \
            << "\nRequired grade to execute is " << obj.getGradeToExec() << "\nForm status: not signed\n");
    }
}