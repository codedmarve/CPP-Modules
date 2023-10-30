/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 01:53:42 by moduwole          #+#    #+#             */
/*   Updated: 2023/10/22 23:31:49 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_CLASS_H
# define BUREAUCRAT_CLASS_H

# include<iostream>
# include <string>

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
        public:
            virtual const char *what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
        public:
            virtual const char *what() const throw();
    };

    std::string     getName(void) const;
    int             getGrade(void) const;
    void            incrementGrade(void);
    void            decrementGrade(void);
};

std::ostream     &operator<<(std::ostream &o, Bureaucrat const &obj);

#endif