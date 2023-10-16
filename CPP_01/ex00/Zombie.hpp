/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 17:22:23 by moduwole          #+#    #+#             */
/*   Updated: 2023/06/21 17:22:23 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
private:
	std::string	name;

public:
	Zombie( std::string name );
	~Zombie( void );

	void	announce( void );
};

Zombie*		newZombie( std::string name );
void		randomChump( std::string name );

#endif