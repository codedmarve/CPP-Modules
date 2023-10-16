/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 14:34:01 by moduwole          #+#    #+#             */
/*   Updated: 2023/06/22 14:34:01 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA (std::string const newName, Weapon const &newWeapon)
				: name(newName), weapon(newWeapon) {}

HumanA::~HumanA ( void ) {}

void	HumanA::attack( void ) const {

	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
