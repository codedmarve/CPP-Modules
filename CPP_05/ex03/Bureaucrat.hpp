/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 02:10:17 by moduwole          #+#    #+#             */
/*   Updated: 2023/11/01 01:38:19 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_CLASS_H
# define BUREAUCRAT_CLASS_H

# include<iostream>
# include <string>
# include "AForm.hpp"

class AForm;

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
    void            executeForm(AForm const &form);

    void            signForm(AForm &form) const;
};

std::ostream     &operator<<(std::ostream &o, Bureaucrat const &obj);

#endif