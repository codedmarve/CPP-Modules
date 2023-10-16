/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 11:18:01 by moduwole          #+#    #+#             */
/*   Updated: 2023/07/17 11:18:01 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : _name("default name")
{
	std::cout << "Diamond constructor called" << std::endl;
	this->_hitPoints = FragTrap::getHitPoints();
	this->_energyPoints = ScavTrap::getEnergyPoints();
	this->_attackDamage = FragTrap::getAttackDamage();
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), _name(name)
{
	std::cout << "Diamond name constructor called.\n";
	this->_hitPoints = FragTrap::getHitPoints();
	this->_energyPoints = ScavTrap::getEnergyPoints();
	this->_attackDamage = FragTrap::getAttackDamage();
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Diamond destructor called.\n";
}

DiamondTrap::DiamondTrap(DiamondTrap const &other) : ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	std::cout << "Diamond copy constructor called.\n";
	*this = other;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &other)
{
	if (this == &other)
		return *this;
	this->_name = other.getName();
	this->_hitPoints = other.FragTrap::getHitPoints();
	this->_energyPoints = other.ScavTrap::getEnergyPoints();
	this->_attackDamage = other.FragTrap::getAttackDamage();
	return *this;
}

void		DiamondTrap::whoAmI(void)
{
	std::cout << "My own name is : " << this->_name << " and my ClapTrap name is : " << this->ClapTrap::_name << std::endl;
}

std::string	DiamondTrap::getDiamondName(void)
{
	return (this->_name);
}

void	DiamondTrap::setDiamondName(std::string name)
{
	this->_name = name;
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}