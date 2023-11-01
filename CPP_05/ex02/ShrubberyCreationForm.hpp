/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 03:11:19 by moduwole          #+#    #+#             */
/*   Updated: 2023/11/01 02:02:08 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

# include "AForm.hpp"

class AForm;

class ShrubberyCreationForm : public AForm
{
private:
     std::string    _target;

public:
     ShrubberyCreationForm();
     ShrubberyCreationForm(std::string target);
     ShrubberyCreationForm(ShrubberyCreationForm const &obj);
     ~ShrubberyCreationForm();

     ShrubberyCreationForm    &operator=(ShrubberyCreationForm const &obj);

     std::string    getTarget() const;

     void           execute(Bureaucrat const &executor) const;
     void           executeForm() const;
};

#endif