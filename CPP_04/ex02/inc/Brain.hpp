/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 10:07:10 by moduwole          #+#    #+#             */
/*   Updated: 2023/07/22 10:07:10 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
# include <string>
# include <iostream>

class Brain {
private:
	std::string	_ideas[100];

public:
	Brain();
	Brain(Brain const &other);
	~Brain();

	Brain		&operator=(Brain const &other);
	void		setIdeas(int index, std::string idea);
	std::string	getIdeas(int index);
};

#endif