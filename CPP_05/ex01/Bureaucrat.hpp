/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 23:08:47 by moduwole          #+#    #+#             */
/*   Updated: 2023/10/30 01:19:20 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_CLASS_H
# define BUREAUCRAT_CLASS_H

# include<iostream>
# include <string>
# include "Form.hpp"

class Form;

class Bureaucrat
{
private:
    std::string const   _name;
    int                 _grade;

public:
    Bureaucrat();                                           // canonical
    Bureaucrat(std::string name, int grade);
    Bureaucrat(Bureaucrat const &other);                    // canonical
    ~Bureaucrat();                                          // canonical

    Bureaucrat  &operator=(Bureaucrat const &other);        // canonical

    class GradeTooHighException : public std::exception
    {
            virtual const char *what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
            virtual const char *what() const throw();
    };

    std::string     getName(void) const;
    int             getGrade(void) const;
    void            incrementGrade(void);
    void            decrementGrade(void);

    void            signForm(Form &form) const;
};

std::ostream     &operator<<(std::ostream &o, Bureaucrat const &obj);

#endif