/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 03:58:30 by moduwole          #+#    #+#             */
/*   Updated: 2023/07/22 03:58:30 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
private:

public:
	WrongCat();
	WrongCat(std::string type);
	WrongCat(WrongCat const &other);
	virtual ~WrongCat();

	WrongCat	&operator=(WrongCat const &other);
	void		makeSound() const;

};

#endif