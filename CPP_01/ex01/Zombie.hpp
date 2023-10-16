/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 10:53:37 by moduwole          #+#    #+#             */
/*   Updated: 2023/06/22 10:53:37 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
private:
	std::string	name;

public:
	Zombie( void );
	~Zombie( void );

	void	setName(std::string name);
	void	announce( void );
};

Zombie* zombieHorde( int N, std::string name );

#endif