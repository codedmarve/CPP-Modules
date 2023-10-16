/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 17:40:20 by moduwole          #+#    #+#             */
/*   Updated: 2023/06/24 17:40:20 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB (std::string const newName) : weapon(NULL), name(newName) {}

HumanB::~HumanB ( void ) {}

void	HumanB::attack( void ) const {

	if (this->weapon)
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " attacks with their fist" << std::endl;
		
}

void	HumanB::setWeapon(Weapon &newWeapon) {

	this->weapon = &newWeapon;
}
