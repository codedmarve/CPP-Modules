/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 17:57:43 by moduwole          #+#    #+#             */
/*   Updated: 2023/07/13 17:57:43 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap () {

	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "Scav constructor called" << std::endl;
}

ScavTrap::ScavTrap (std::string name) : ClapTrap(name) {

	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "Scav name constructor called" << std::endl;
}

ScavTrap::ScavTrap (ScavTrap const &scav) : ClapTrap(scav) {

	*this = scav;
	std::cout << "Scav copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {

	std::cout << "Scav destructor called" << std::endl;
}

ScavTrap 	&ScavTrap::operator=(ScavTrap const &scav) {

	if (this == &scav)
		return *this;
	this->_name = scav.getName();
	this->_hitPoints = scav.getHitPoints();
	this->_energyPoints = scav.getEnergyPoints();
	this->_attackDamage = scav.getAttackDamage();
	return *this;
}

void	ScavTrap::attack (const std::string &target) {

	if (this->_energyPoints == 0 || this->_hitPoints == 0)
	{
		std::cout << "ScavTrap has no energy points or hit points left to attack" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " attacks " << target;
	std::cout << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints--;
}

void	ScavTrap::guardGate(void) {

	std::cout << "The ScavTrap is now in Gate keeper mode" << std::endl;
}
