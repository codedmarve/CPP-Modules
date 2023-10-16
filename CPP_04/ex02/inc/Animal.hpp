/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 10:07:59 by moduwole          #+#    #+#             */
/*   Updated: 2023/07/21 10:07:59 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <string>
# include <iostream>

class Animal {
private:

protected:
	std::string _type;

public:
	Animal();
	Animal(std::string type);
	Animal(Animal const &other);
	virtual ~Animal();

	Animal			&operator=(Animal const &other);
	
	void			setType(std::string type);
	std::string		getType(void) const;
	virtual	void	makeSound() const = 0;
};

#endif