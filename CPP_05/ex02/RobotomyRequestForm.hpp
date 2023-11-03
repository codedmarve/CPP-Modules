/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 02:20:26 by moduwole          #+#    #+#             */
/*   Updated: 2023/11/03 16:18:21 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:
	std::string _target;

public:
	RobotomyRequestForm(void);
	~RobotomyRequestForm(void);
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const &obj);

	RobotomyRequestForm & operator=(RobotomyRequestForm const &that);

	std::string getTarget() const;
	void	execute(Bureaucrat const & executor) const;
	void    executeForm(void) const;
	class BadLuck: public std::exception
	{
		virtual const char *what() const throw()
		{
			return ("Ohh noooo... ");
		}
	};
};

#endif