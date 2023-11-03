/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 02:20:28 by moduwole          #+#    #+#             */
/*   Updated: 2023/11/03 16:28:28 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
private:
	std::string _target;
	
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const &that);
	~PresidentialPardonForm();

	PresidentialPardonForm &operator=(PresidentialPardonForm  const &src);

	void    execute(Bureaucrat  const &executor) const;
	void    executeForm(void) const;
	std::string getTarget() const;
};

#endif