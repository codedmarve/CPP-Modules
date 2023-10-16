/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 03:50:38 by moduwole          #+#    #+#             */
/*   Updated: 2023/07/22 03:50:38 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>
# include <string>

class WrongAnimal {
protected:
	std::string _type;

public:
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(WrongAnimal const &other);
	virtual ~WrongAnimal();

	WrongAnimal			&operator=(WrongAnimal const &other);
	
	void			setType(std::string type);
	std::string		getType(void) const;
	void	makeSound() const;
};

#endif