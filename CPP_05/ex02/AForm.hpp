/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 02:10:46 by moduwole          #+#    #+#             */
/*   Updated: 2023/11/01 01:21:00 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <cstdlib>
#include <fstream>

class Bureaucrat;

class AForm
{
private:
    std::string const   _name;
    bool                _signed;
    int const           _gradeToSign;
    int const           _gradeToExec;

public:
    AForm();
    AForm(std::string name, int gts, int gte);
    AForm(AForm const &other);
    virtual ~AForm();

    AForm &	operator=(AForm const & obj);

    class GradeTooHighException : public std::exception
    {
        virtual const char *what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
        virtual const char *what() const throw();
    };
    class FormNotSignedException: public std::exception
    {
        virtual const char *what() const throw();
    };

    std::string     getName(void) const;
    bool            getSigned(void) const;    
    void            setSigned(bool sign);
    int             getGradeToSign(void) const;    
    int             getGradeToExec(void) const;
    virtual void    execute(Bureaucrat const &executor) const = 0;
    void            beSigned(Bureaucrat const &obj);
};

std::ostream     &operator<<(std::ostream &o, AForm const &obj);

#endif