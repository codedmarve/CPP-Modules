/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 02:44:17 by moduwole          #+#    #+#             */
/*   Updated: 2023/11/03 22:10:20 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Bot"), _grade(150) {

    std::cout << "A Bot Bureaucrat is now available" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    try
    {
        if (grade < 1)
            throw Bureaucrat::GradeTooHighException();
        else if  (grade > 150)
            throw Bureaucrat::GradeTooLowException();
        else
        {
            _grade = grade;
            std::cout << getName() << " with grade level " \
                << getGrade() << " is now available" << std::endl;
        }
    }
    catch(const std::exception &ex)
    {
        std::cerr << "Exception thrown for Bureacrat " << getName() << ex.what();
        _grade = 150;
        std::cout << "Bureaucrat " << getName() << " with grade level" \
            << getGrade() << " is now available" << std::endl;
    }
}

Bureaucrat::Bureaucrat(Bureaucrat const &other) : _name(other.getName()),  _grade(other._grade)
{
    std::cout << _name << " is now also available" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << _name << " left" << std::endl;
}

Bureaucrat  &Bureaucrat::operator=(Bureaucrat   const &other)
{
    _grade = other.getGrade();
    return (*this);
}

std::string Bureaucrat::getName() const
{
    return (_name);
}

int Bureaucrat::getGrade() const
{
    return( _grade);
}

void    Bureaucrat::incrementGrade()
{
    try
    {
        if (_grade <= 1)
            throw   Bureaucrat::GradeTooHighException();
        else
            _grade -=1;
        std::cout << getName() <<" is upgraded to grade " << getGrade() << std::endl;
    }
    catch(const std::exception &ex)
    {
        std::cerr <<"Exception thrown for Bureacrat " << getName() << ex.what();
    } 
}

void    Bureaucrat::decrementGrade()
{
    try
    {
        if (_grade >= 150)
            throw   Bureaucrat::GradeTooLowException();
        else
            _grade +=1;
        std::cout << getName() <<" is downgraded to grade " << getGrade() << std::endl;
    }
    catch(const std::exception &ex)
    {
        std::cerr <<"Exception thrown for Bureacrat " << getName() << ex.what();
    } 
}

void Bureaucrat::executeForm(AForm const &form)
{
    try
    {
        form.execute(*this);
        std::cout << this->getName() << " executed " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Execution by " << this->_name << " failed with message "<< e.what() << std::endl;
    }
    
}

const char *	Bureaucrat::GradeTooHighException::what() const throw()
{
	return (": grade can not be higher than 1\n");
}

const char *	Bureaucrat::GradeTooLowException::what() const throw()
{
	return (": grade can not be lower that 150\n");
}

void    Bureaucrat::signForm(AForm &form) const
{
    try
    {
        form.beSigned(*this);
        std::cout << getName() << " signed " << form.getName() << " form" << std::endl;
    }
    catch (std::exception const & ex)
    {
        std::cout << getName() << " couldn't sign " << form.getName() << " form" \
            << " because he doesn't have clearance" << std::endl;
    }
}

std::ostream     &operator<<(std::ostream &o, Bureaucrat const &obj)
{
    return (o << obj.getName() << ", bureaucrat grade " << obj.getGrade() <<"\n");
}
