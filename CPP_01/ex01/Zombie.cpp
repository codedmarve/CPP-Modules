/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 11:17:48 by moduwole          #+#    #+#             */
/*   Updated: 2023/06/22 11:17:48 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ) {}

Zombie::~Zombie() {

	std::cout << this->name << " terminated " << std::endl;
}

void	Zombie::setName(std::string name) {

	this->name = name;
}

void	Zombie::announce(void) {

	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}