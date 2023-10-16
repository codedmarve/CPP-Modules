/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 07:22:23 by moduwole          #+#    #+#             */
/*   Updated: 2023/07/17 07:22:23 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap () {

	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "Frag constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) 
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "Frag constructor with name called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &frag) : ClapTrap(frag)
{
	*this = frag;
	std::cout << "Frag copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Frag destructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &frag)
{
	if (this == &frag)
		return *this;
	this->_name = frag.getName();
	this->_hitPoints = frag.getHitPoints();
	this->_energyPoints = frag.getEnergyPoints();
	this->_attackDamage = frag.getAttackDamage();
	return *this;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Hey can i get a high five?" << std::endl;
}

void	FragTrap::attack(const std::string &target)
{
	if (this->_energyPoints == 0 || this->_hitPoints == 0)
	{
		std::cout << "FragTrap has no energy points or hit points left to attack!\n";
		return ;
	}
	std::cout << "FragTrap " << this->_name << " attacks " << target;
	std::cout << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints--;
}
