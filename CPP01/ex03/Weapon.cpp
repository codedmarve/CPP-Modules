/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 14:24:26 by moduwole          #+#    #+#             */
/*   Updated: 2023/06/22 14:24:26 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string const newType) : type(newType) {}

Weapon::~Weapon( void ) {}

std::string const &Weapon::getType( void ) const {

	return (this->type);
}

void	Weapon::setType( std::string const newType ) {

	this->type = newType;
}