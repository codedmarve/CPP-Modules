/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 20:54:32 by moduwole          #+#    #+#             */
/*   Updated: 2023/07/21 20:54:32 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_hpp
# define Cat_hpp
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
private:
	Brain	*_brain;

public:
	Cat();
	Cat(std::string type);
	Cat(Cat const &other);
	virtual ~Cat();

	Cat			&operator=(Cat const &other);
	void		makeSound() const;
	void		setIdeas(int index, std::string idea);
	std::string	getIdeas(int index);
};

#endif