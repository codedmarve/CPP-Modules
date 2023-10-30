/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 21:17:21 by moduwole          #+#    #+#             */
/*   Updated: 2023/10/29 22:32:20 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    std::string const   _name;
    bool                _signed;
    int const           _gradeToSign;
    int const           _gradeToExec;

public:
    Form();
    Form(std::string name, int gts, int gte);
    Form(Form const &other);
    ~Form();

    Form &	operator=(Form const & obj);

    class GradeTooHighException : public std::exception
    {
        virtual const char *what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
        virtual const char *what() const throw();
    };

    std::string     getName(void) const;
    int             getSigned(void) const;    
    int             getGradeToSign(void) const;    
    int             getGradeToExec(void) const;

    void            beSigned(Bureaucrat const &obj);
};

std::ostream     &operator<<(std::ostream &o, Form const &obj);

#endif